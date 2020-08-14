#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> graph[],int u,int v){
	graph[u].push_back(v);
	graph[v].push_back(u);
}
void print(vector<int> graph[],int n){
	vector<int>::iterator it;
	for(int i=1;i<=n;i++){
		cout<<"Adjacent list of vertex  "<<i<<":";
			for(it=graph[i].begin();it!=graph[i].end();it++){
				cout<<*it<<"--> ";
			}
			cout<<endl;
	}
}
int main(){
	int n,e,v,u;
	cout<<"Enter the number of vertices:"<<endl;
	cin>>n;
	cout<<"Enter number of edges:";
	cin>>e;
	vector<int> graph[n];
	for(int i=1;i<=e;i++){
		cout<<"Enter start & end vertex of edges:"<<endl;
		cin>>u>>v;
		addEdge(graph,u,v);
	}
	print(graph,n);
        return 0;
}






