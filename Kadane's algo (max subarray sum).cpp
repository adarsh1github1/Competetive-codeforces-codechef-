#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int a[], int n){
    int max_so_far = INT_MIN;
    int max_ending_here =  0;
    for(int i=0;i<n;i++){
        max_ending_here+=a[i];
        if(max_ending_here<0)
        max_ending_here = 0;
        else if(max_so_far<max_ending_here)
        max_so_far = max_ending_here;
    }
    if(max_so_far == 0)
    return a[0];
    else
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
