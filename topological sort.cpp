void topo(int i,int V, int vis[],vector<int> adj[], stack<int> &s)
{
    vis[i]=1;
    for(int j =0 ;j<adj[i].size();j++)
    {
        if(!vis[adj[i][j]])
        topo(adj[i][j],V,vis,adj,s);
    }
    s.push(i);
}
int* topoSort(int V, vector<int> adj[])
{
 stack<int> s;
 int vis[V] = {0};
 for(int i =0;i<V;i++)
 {
     if(!vis[i])
     topo(i,V,vis,adj,s);
 }
 int *a = ((int*)malloc(sizeof(int)*V));
 int j=0;
 while(!s.empty())
 {
    a[j] = s.top();
    s.pop();
    j++;
 }
 return a;
}
