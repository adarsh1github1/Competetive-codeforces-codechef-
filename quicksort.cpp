#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b =t;
}
int partition(int a[], int l, int h){
	int pivot = a[l];
	int i = l;
	int j = h;
	while(i<j)
	{
		while(a[i]<=pivot){
			i++;
		}
		while(pivot<a[j]){
			j--;
		}
		if(i<j)
		swap(&a[i],&a[j]);
	}
	a[l] = a[j];
	a[j] = pivot;
	return j;
}
void quicksort(int a[], int l, int h){
	int pivot_index;
	if(l<h){
		pivot_index = partition(a,l,h);
		
		quicksort(a,l,pivot_index-1);
		quicksort(a,pivot_index+1,h);
	}
}
int main(){
	int n;
	cin>>n;
	int i;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
