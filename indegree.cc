#include<iostream>
using namespace std;
int graph[4][4]={{0,1,0,0},{0,0,1,1},{1,1,0,1},{1,0,0,0}};

int matrix(int graph[4][4],int trans[4][4]){
	int res[4][4],result[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			trans[i][j]=graph[j][i];
		}
	}
	for (int i=0;i<4;i++){
        	for (int j=0;j<4;j++){
			res[i][j]=0;
            		for(int k= 0;k<4;k++)
                		res[i][j]+=graph[i][k]*trans[k][j];
        	}
    	}
	for (int i=0;i<4;i++){
                for (int j=0;j<4;j++){
                        result[i][j]=0;
                        for(int k= 0;k<4;k++)
				result[i][j]+=trans[i][k]*graph[k][j];
		}
	}
	return 0;
}
void degree(){
	int res[4][4],result[4][4];
	for (int i=0;i<4;i++){
        	for (int j = 0;j<4;j++){
            		if(i == j)
                	cout<<"Indegree of"<<" "<<i<<"="<<res[i][j]<<",";
        	}
    	}
    	cout << endl;
	for (int i=0;i<4;i++){
                for (int j = 0;j<4;j++){
                        if(i == j)
                        cout<<"Outdegree of"<<" "<<i<<"="<<result[i][j] <<",";
                }
        }
        cout << endl;
}
int main(){
	int trans[4][4];
	matrix(graph,trans);
	degree();

	return 0;
}
