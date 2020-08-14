#include<iostream>
using namespace std;
int checkSimpleUndirected(int graph[6][6]);
int graph[6][6]={{0,1,1,1,0,1},
		{1,0,0,1,1,0},
		{1,0,0,0,0,1},
		{0,1,0,1,0,0},
		{0,1,0,1,0,0},
		{1,0,1,1,0,0}};
int checkSimpleUndirected(int graph[6][6]){
	int trans[6][6];
	for(int i=0;i<6;i++){
                for(int j=0;j<6;j++){
                       trans[i][j]=graph[j][i];
		}
	}
	for(int i=0;i<6;i++){
                for(int j=0;j<6;j++){
			if(trans[i][j]!=graph[i][j]) return 0;
			if(i==j && trans[i][j]==1) return 0;
		}
	}
	return 1;
}

int main(){
	int result=checkSimpleUndirected(graph);
	if(result==1){
		cout<<"Graph is simple and Undirected"<<endl;
	}else{
		cout<<"Graph is not simple and undirected"<<endl;
	}
	return 0;
}
