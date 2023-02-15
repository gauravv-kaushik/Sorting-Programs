#include <iostream>  
  
using namespace std;  
  
int getMax(int a[], int n){  
    int max = a[0];  
    for (int i = 1; i < n; i++){ 
        if (a[i] > max)  
            max = a[i];
    }  
    return max;  
}  
void bucket(int a[], int n){  
    int max = getMax(a, n); //max is the maximum element of array  
    int bucket[max], i;  
    for (int i=0;i<max;i++){  
        bucket[i] = 0;  
    }  
    for (int i = 0; i < n; i++){  
        bucket[a[i]]++;  
    }
    int j=0;
    for (int i=0; i<max;i++){  
        while (bucket[i] > 0){  
            a[j++] = i;  
            bucket[i]--;  
        }  
    }  
}  
int main(){
    int n;
    cout << "enter  no. of element :";
    cin >> n;
    int arr[n];
    cout << "enter elements...";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bucket(arr, n);  
    cout<<"\nArray after bucket sort :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }  
}  