#include <bits/stdc++.h>
using namespace std;
#define N 3 
#define M 4 
void setarrayzero(int a[N][M]){
	int i,j;
	int n = N;
	int m = M;
	int row[n],col[m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j] == 1){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<m;j++){
			if(row[i] == 1 || col[j] == 1){
				a[i][j] = 1;
			}
		}
	}
}
void setarrayzero_nospace(int a[N][M]){
	int n = N;
	int m = M;
	int i,j;
	bool rflag,cflag;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(i==0 && a[i][j] == 1)
				rflag = true;
			if(j==0 && a[i][j] == 1)
				cflag = true;
			if(a[i][j] == 1){
				a[0][i] = 1;
				a[i][0] = 1;
			}
		}
	}
	for (int i = 1; i < n; ++i)
	{
		/* code */
		for (int j = 1; j < m; ++j)
		{
			/* code */
			if(a[0][j] == 1 || a[i][0] == 1){
				a[i][j] = 1;
			}
		}
	}
	if(rflag ==true){
	for (int i = 0; i < m; ++i)
	{
		a[0][i] = 1;
	}
}
if (cflag == 1)
{
	/* code */
	for (int i = 0; i < n; ++i)
	{
		/* code */
		a[i][0] = 1;
	}
}
}
void printl(int a[N][M]){
	int n = N;
	int m = M;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int a[N][M];
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			cin>>a[i][j];
		}
	}
	setarrayzero(a);
	printl(a);
	return 0;
}
