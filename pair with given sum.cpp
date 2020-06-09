#include<bits/stdc++.h>
using namespace std;
int pairsum(int arr[],int n, int sum){
	unordered_map<int , int> m;
	int count=0;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		count+=m[sum-arr[i]];
		if(sum-arr[i] == arr[i])
			count--;
	}
	return count/2;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int sum;
	cin>>sum;
	cout<<pairsum(arr,n,sum);
	return 0;
}
