#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of nodes:"<<endl;
	cin>>n;
	int gp[n][n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"Enter the node " <<i<< "connected to node " <<j<<" ";
			cin>>gp[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<gp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
