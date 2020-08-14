#include<iostream>
using namespace std;

unsigned long factor(unsigned int n){
	static long mem[100]={0};
	if(n==0) return 1;
	if(mem[n]!=0){
		return mem[n];
	}else{
		mem[n]=n*factor(n-1);
		return mem[n];
	}
}


int main(){
	unsigned int x;
	cout<<"Enter number:";
	cin>>x;
	long fact=factor(x);
	cout<<fact<<endl;
	return 0;
}
