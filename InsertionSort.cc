#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	if(n<=1) return;
	insertionSort(arr,n-1);
	for(int i=0;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && temp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

void print(int arr[],int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[]={12,3,4,6,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	print(arr,n);
return 0;
}
