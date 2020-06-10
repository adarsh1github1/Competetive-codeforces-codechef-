#include <bits/stdc++.h>
using namespace std;
void sortfun(int a[],int n)
{
   int low=0,mid=0,high = n-1;
   while(mid<=high){
   	switch(a[mid]){
   		case 0: 
   		    swap(a[low++],a[mid++]);
   		    break;
   		case 1:
   		    mid++;
   		    break;
   		 case 2:
   		    swap(a[mid],a[high--]);
   		    break; 
   	}
   } 
}
void printl(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sortfun(a,n);
	printl(a,n);
	return 0;
}
