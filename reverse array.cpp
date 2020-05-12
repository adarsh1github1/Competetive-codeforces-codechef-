#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int n){
	for(int i=0;i<n/2;i++){
		swap(a[i], a[n-i-1]);
	}

}
void swap(int a ,int b){
	int temp;
	temp = a;
	a = b;
	b = a;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	rev(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		}
		cout<<endl;
	return 0;
}
