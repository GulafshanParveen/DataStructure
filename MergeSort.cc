#include<iostream>
using namespace std;

void Merge(int a[],int start,int end,int len){
	int i,j,k;
	int n1=len-start+1;
	int n2=end-len;
	int c[n1],d[n2];
	for(i=0;i<n1;i++){
		c[i]=a[start+i];
	}
	for(j=0;j<n2;j++){
		d[j]=a[len+1+j];
	}
	i=0,j=0,k=start;
	while(i<n1 && j<n2){
		if(c[i]<=d[i]){
			a[k]=c[i];
			i++;
		}
		else{
		a[k]=d[j];
		j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=c[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=d[j];
		j++;
		k++;
	}
}

void MergeSort(int a[],int start,int end){
	if(start<end){
		int len=(start+end-1)/2;
		MergeSort(a,start,len);
		MergeSort(a,len+1,end);
		Merge(a,start,end,len);
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[]={12,42,23,1,2,4,3,6};
	int n=sizeof(a)/sizeof(a[0]);
	MergeSort(a,0,n-1);
	print(a,n);
	return 0;
}
