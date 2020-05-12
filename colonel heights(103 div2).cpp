#include<bits/stdc++.h>
using namespace std;
void swap(int n,int m);
int min_secs(int n, int a[]){
	int min,max,min_i,max_i,c=0;
	int i;
	min = *min_element(a,a+n);
	max = *max_element(a,a+n);
	for(i=0;i<n;i++){
		if(a[i]==max)
		{
		max_i = i;
		break;
	}
	}
	for(i=n-1;i>=0;i--){
		if(a[i]==min)
		{
		min_i=i;
		break;
	}
	}
	for(i=min_i;i<n-1;i++){
		swap(a[i],a[i+1]);
		c++;
	}
	for(i=max_i;i>=1;i--){
		swap(a[i],a[i-1]);
		c++;
	}
	if(max_i>min_i)
	c--;
	
	return c;
}
void swap(int n,int m){
	int t;
	t=n;
	n=m;
	m=t;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	x = min_secs(n,a);
	cout<<x;
	return 0;
}
