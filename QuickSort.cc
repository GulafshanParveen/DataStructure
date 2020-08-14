#include<iostream>
#include<algorithm>
using namespace std;

int Partition(int a[],int start,int end){
	int pivot=a[end];
	int i=(start-1);
	for(int j=start;j<=end-1;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[end]);
	return (i+1);

}

void QuickSort(int a[],int start,int end){
	if(start<end){
		int S=Partition(a,start,end);
		QuickSort(a,start,S-1);
		QuickSort(a,S+1,end);
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

int main(){
	int a[]={12,4,5,1,8,9};
	int n=sizeof(a)/sizeof(a[0]);
	QuickSort(a,0,n-1);
	print(a,n);
	return 0;
}
