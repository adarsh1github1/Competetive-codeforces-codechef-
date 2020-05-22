#include<bits/stdc++.h>
using namespace std;
void rotateArr(int arr[], int d,int n){
	int i,j;
		int temp[d];
		for(int k=0;k<d;k++)
		temp[k] = arr[k];
		for(i=d;i<n;i++){
			arr[i-d] = arr[i];
		}
		for(i=n-d;i<n;i++)
		arr[i] = temp[i-(n-d)];
}
int main(){
	int n;
	cin>>n;
	int d;
	cin>>d;
	int i;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	rotateArr(a,d,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
