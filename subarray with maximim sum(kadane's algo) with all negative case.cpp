#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int a[], int n){
    int max_so_far = a[0];
    int max_ending_here = a[0];
    for(int i=1;i<n;i++){
    	max_ending_here = max(max_ending_here, max_ending_here + a[i]);
    	max_so_far = max(max_so_far, max_ending_here);
	}
	return max_so_far;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<maxSubarraySum(a,n);
}
