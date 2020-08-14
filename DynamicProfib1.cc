#include<iostream>
using namespace std;

unsigned int fibmem(unsigned int n){
	//unsigned int* mem=(unsigned int*)calloc(n+1,sizeof(unsigned int));
	static int mem[100]={0};
        if(n==0) return 0;
        mem[1]=1;
	mem[2]=1;
        if(mem[n-2]==0){
		mem[n-2]=fibmem(n-2);
	}
	if(mem[n-1]==0){
		mem[n-1]=fibmem(n-1);
	}
	return mem[n-2]+mem[n-1];
}

int main(){
        unsigned int term;
        cout<<"Enter the number:";
        cin>>term;
        cout<<fibmem(term)<<endl;
        return 0;
}




