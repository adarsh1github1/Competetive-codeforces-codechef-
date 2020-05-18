#include<bits/stdc++.h>
using namespace std;
void binsearch(int x,int n,int a[]){
	// x is the element to search
	int low,mid,high;
	low = a[0];
	high = a[n-1];
	mid = a[n/2];
	int c=0;
	while(low<high){
	
	if(x>mid){
		low = mid+1;
		mid = (low+high)/2;
	}
	else if(mid == x){
		cout<<"Element found \n";
		c++;
		break;
	}
	else{
		high = mid-1;
		mid  = (low + high)/2;
	}
}
if(c==0)
cout<<"Element not present";
}
int main(){
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int key;
	cin>>key;
	binsearch(key,n,a);	
	return 0;
	
}
