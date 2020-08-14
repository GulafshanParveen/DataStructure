#include<iostream>
using namespace std;

unsigned int fib(unsigned int n){
	if(n==0) return -1;
	if(n==1 || n==2) return 1;
	return fib(n-2)+fib(n-1);
}

int main(){
	unsigned int term;
	cout<<"Enter the number:";
	cin>>term;
	cout<<fib(term)<<endl;
	return 0;
}
