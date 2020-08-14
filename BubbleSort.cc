#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
	if(n<=1) return;

	for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
	}
	BubbleSort(arr,n-1);

}
void display(int arr[],int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main(){
	int arr[]={12,4,6,7,1,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,n);
	display(arr,n);
	return 0;
}
