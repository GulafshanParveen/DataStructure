#include <iostream>
#define m 3
#define n 4
using namespace std;

int Cost[m][n]={{1,3,5,8},
		{4,2,1,7},
		{4,3,2,3}};

int minCost(int Cost[m][n]){
	static int mcost[m][n];
	int i,j;
	for(i=1;i<=m;i++){
		mcost[i][0]=Cost[i][0]+Cost[i-1][0];
	}
	for(j=1;j<=n;j++){
		mcost[0][j]=Cost[0][j]+Cost[0][j-1];
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(mcost[m][n]==0){
			mcost[i][j] = Cost[i][j]+min(mcost[i-1][j],mcost[i][j-1]);
			}
		}
	}
	return mcost[m-1][n-1];
}

int main(){
	int i,j;
	int result=minCost(Cost);
	cout<<result<<endl;
	return 0;
}
