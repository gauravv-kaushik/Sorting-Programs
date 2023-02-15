#include<iostream>
using namespace std;

void count(int* arr,int n,int r1,int r2){
	int r=r2-r1+1;
	int* range=new int[r];
	for(int i=0;i<r;i++){
		range[i]=0;
	}
	
	for(int i=0;i<n;i++){
		int x=arr[i]-r1;
		range[x]+=1;
	}
	
	cout<<"\n\nRange : ";
	for(int i=0;i<r;i++){
		cout << range[i] << " ";
	}
	
	int k=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<range[i];j++){
			arr[k]=r1+i;
			k++;
		}
	}
}


int main(){
	int n,r1,r2;
	cout<<"Enter Size of the list : ";
	cin>>n;
	cout<<"Enter range of number enter : ";
	cin>>r1>>r2;
	int r=r2-r1+1;
	
	int* arr=new int[n];
	cout<<"Enter the Elements for the list... ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>r2 || arr[i]<r1){
			cout<<"Enter number between range...";
			i--;
		}
	}
	
	cout<<"\nOriginal list is : ";
	for(int i=0;i<n;i++){
		cout <<arr[i] << " ";
	}
	
	count(arr,n,r1,r2);
	
	cout<<"\nSorted list is : ";
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
