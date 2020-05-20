#include <bits/stdc++.h>
using namespace std;
struct job{
	char id;
	int dline;
	int profit;
};
bool cmp(job a,job b){
	return (a.profit > b.profit);
}
void jobsequence(job a[], int n){
	// Sort all jobs according to decreasing order of prfit 
	sort(a,a+n,cmp);
	int result[n];// Sort all jobs according to decreasing order of prfit 
	bool slot[n];// Sort all jobs according to decreasing order of prfit 
	 // Initialize all slots to be free 
	for(int i=0;i<n;i++)
	slot[i] = false;
	for(int i=0;i<n;i++){
		// Find a free slot for this job (Note that we start 
       // from the last possible slot) 
		for(int j=min(n,a[i].dline)-1;j>=0;j--){
			if(slot[j] == false){
				result[j] = i;  //add this job to result
				slot[j] = true;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(slot[i])
		cout<<a[result[i]].id<<" ";
	}
	cout<<endl;
    
}
int main(){
	job a[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"sequence of jobs ";
	jobsequence(a,n);
		return 0;
}
