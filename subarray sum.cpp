#include<bits/stdc++.h>
using namespace std;
void subarraySum(int a[], int n, int sum){
	int i;
	int s=0,l=0;
	for(i=0;i<n;i++){
	    s+=a[i];
	    while(s>sum){
	    	s-=a[l];
	    	l++;
		}
		if(s==sum){
		cout<<l+1<<" "<<i+1;
		break;
		}
		
	}
}
int main(){
	int n,sum;
	cin>>n;
	cin>>sum;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	subarraySum(a,n,sum);
	return 0;
}
