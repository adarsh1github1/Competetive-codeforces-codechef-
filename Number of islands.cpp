
#define max 101
// checks if the the value at that index i,j is 1 pr 0 and if that index(veretx) is visited or not
 bool checkindex(vector<int> a[], int i,int j, bool visited[max][max],int n,int m){
	if((i >= 0) && (i < n) && (j >= 0) && (j < m) && a[i][j] && !visited[i][j])
		return true;
	return false;
}
void dfs(vector<int> a[],int i,int j,bool visited[max][max],int n, int m){
	visited[i][j] = true;
	// row check and colcheck allows to check all the 8 neighbours 
	int rowcheck[8] = {-1,-1,-1,0,0,1,1,1};
	int colcheck[8] = {-1,0,1,-1,1,-1,0,1};
	for(int k=0;k<8;k++){
		if(checkindex(a,i+rowcheck[k],j+colcheck[k],visited,n,m))
			dfs(a,i+rowcheck[k],j+colcheck[k],visited,n,m);
	}
}
int findIslands(vector<int> a[], int n, int m){
	bool visited[max][max];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			visited[i][j] = 0;
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			visited[i][j] = 0;
		}
	}
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] && !visited[i][j]){
				dfs(a,i,j,visited,n,m);
				++count;   // check for th econnected component and increse count
			}
		}
		
	}
	return count;

	}
