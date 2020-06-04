#include <bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n) { 
    for(int i=0;i<n;i++){
    	if(abs(arr[i])-1 < n && arr[abs(arr[i])-1] > 0)
    		arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];  
    }
    for(int i=0;i<n;i++){
 
    	if(arr[i]>0)
    		return i+1;
    }
}
int segregate(int a[],int n){
	int i,j;
	j=0;
	for(i=0;i<n;i++){
		if(a[i]<0)
		{
			swap(a[i],a[j]);
			j++;
		}
	}
	return j;
}
int findMiss(int a[],int n){
	int shift = segregate(a,n);
	return findMissing(a+shift,n-shift);
}
int main(){
	/*
#ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r",stdin);
     freopen("outputf.txt","w",stdout);
 #endif
 */
 int n;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	}
 	cout<<findMiss(a,n);
 	
 	return 0;
 }
