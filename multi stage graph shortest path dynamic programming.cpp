#include<bits/stdc++.h>
using namespace std;
#define N 8
void shorPath(int graph[N][N]){
	//int stages = 4;
	int cost[N] = {0};
	int d[N] = {0};
	int i,j;
	int total_cost = 0;
	cost[N-1] = 0;
	d[N-1] = N-1;
	for(i = N-2;i>=0;i--){
		int min = INT_MAX;
		for(j=i+1;j<N;j++){
			if(graph[i][j]!=0 && graph[i][j] + cost[j]< min){
				min = graph[i][j] + cost[j];
				d[i] = j;
			}
		}
		cost[i] = min; 
	}
	for(i=0;i<N;i++){
		cout<<cost[i]<<" "<<d[i]<<endl;
	}
	cout<<cost[0];
}

int main(){
	int graph[N][N] = 
      {{0, 1, 2, 5, 0, 0, 0, 0}, 
       {0, 0, 0, 0, 4, 11, 0, 0}, 
       {0, 0, 0, 0, 9, 5, 16, 0}, 
       {0, 0, 0, 0, 0, 0, 2, 0}, 
       {0, 0, 0, 0, 0, 0, 0, 18}, 
       {0, 0, 0, 0, 0, 0, 0, 13}, 
       {0, 0, 0, 0, 0, 0, 0, 2}};  
       shorPath(graph);
	return 0;
}
