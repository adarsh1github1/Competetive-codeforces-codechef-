#include <bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n){
	int temp,index;
	for(int i=0;i<n;i++){
		temp = a[i];
		index = i-1;
		while(index>=0 && a[index]>temp){
			a[index+1] = a[index];
			index--;
		}
		a[index+1] = temp;
	}
}
void prinntl(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	insertionsort(a,n);
	prinntl(a,n);
	return 0;
}
