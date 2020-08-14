#include<iostream>
using namespace std;

unsigned long PowerDynamic(int n,int pow){
	static long mem[100]={0};
	long power=1;
	if(mem[n]!=0){
		return mem[n];
	}else{
		for(int i=0;i<pow;i++)
			power*=n;
			mem[n]=power;
	}
	return mem[n];
}

int main(){
	long n,pow;
	cout<<"Enter number:";
	cin>>n;
	cout<<"Enter power:";
	cin>>pow;
	cout<<PowerDynamic(n,pow)<<endl;
	return 0;
}
