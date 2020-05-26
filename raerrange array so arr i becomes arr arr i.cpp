#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
	for(int i=0;i<n;i++){
        arr[i]+=(arr[arr[i]]%n)*n;
    }
    for(int i=0;i<n;i++){
        arr[i] = arr[i]/n;
    }
}
void printarr(int a[],int n){
	for(int i=0;i<n;i++)
	cout<<a[i];
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	rearrange(a,n);
	printarr(a,n);
	return 0;
}
