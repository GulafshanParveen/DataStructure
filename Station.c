#include <stdio.h>
int cost[9][9]={{0,10,75,84,20,40,64,65,100},
		{-1,0,20,25,30,35,62,63,94},
		{-1,-1,0,30,35,60,59,61,96},
		{-1,-1,-1,0,40,45,57,58,99},
		{-1,-1,-1,-1,0,50,55,56,98},
		{-1,-1,-1,-1,-1,0,60,65,99},
		{-1,-1,-1,-1,-1,-1,0,70,92},
		{-1,-1,-1,-1,-1,-1,-1,0,91},
		{-1,-1,-1,-1,-1,-1,-1,-1,0}};
int minCost(int,int);
int main(){
	int source,destination;
	printf("Enter source and destination :");
	scanf("%d%d",&source,&destination);
	if(destination<source){
		printf("Can't move recusively");
		return 0;
	}
        int min=minCost(source,destination);
	printf("Minimum cost is %d\n",min);
	return 0;
}

int minCost(int s,int d){
	static int ccost[4][4]={0};
	if(s==d || s==d-1) return cost[s][d];
	if(ccost[s][d]==0){
		ccost[s][d]=cost[s][d];

			for(int i=s+1;i<d;i++){
				/*minCost(1,3) = cost[1][2]+cost[2][3] < cost[1][3] ? cost[1][2]+cost[2][3] : cost[1][3];
				minCost(0,2) = cost[0][1]+cost[1][2] < cost[0][3] ? cost[0][1]+cost[1][2] : cost[0][3];
				minCost(0,3) = min{cost[0][3],cost[0][1]+minCost(1,3),minCost(0,2)+cost[2][3]};*/
				int temp=minCost(s,i)+minCost(i,d);
				if(temp<ccost[s][d]) ccost[s][d]=temp;
			}
	}
	return ccost[s][d];
}
