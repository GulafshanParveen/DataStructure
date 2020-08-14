#include<iostream>
#include<climits>
using namespace std;
int SubArray(int* nums,int numSize){
	int max=INT_MIN,temp=0;
	for(int i=0;i<numSize;i++){    //cadence algorithmo
		temp+=nums[i];
		if(temp<0) temp=0;
		else if(max<temp) max=temp;
	}
return max;
}

int main(){
	int a[]={-2,-1,-3,4,-1,2,1,-5,4};
	int n=sizeof(a)/sizeof(a[0]);
	int result=SubArray(a,n);
	cout<<"Maximum Contiguous:"<<result<<endl;
	return 0;
}
