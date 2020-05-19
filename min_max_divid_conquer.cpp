#include<bits/stdc++.h>
using namespace std;
void min_max(int a[],int low,int high,int& min,int& max){
	//one element present
	if(low == high){
		if(a[low]>max){
			max = a[low];
		}
		if(a[high]<min)
		min = a[high];
		
		return;
	}
	// two elements
	if(high-low == 1){
		if(a[low]>a[high]){
			if(a[low]>max)
			max = a[low];
			if(a[high]<min)
			min = a[high];
		}
		else{
			if(a[high]>max)
			max = a[high];
			if(a[low]<min)
			min = a[low];
		}
		return;
	}
	int mid = (high + low) / 2;
	min_max(a,low,mid,min,max);
	min_max(a,mid+1,high,min,max);
}
int main(){
 int min = INT_MAX;
 int max = INT_MIN;
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 min_max(a,0,n-1,min,max);
 cout<<"The minimum number is "<<min;
 cout<<"\nThe maximum number is "<<max;	
}

