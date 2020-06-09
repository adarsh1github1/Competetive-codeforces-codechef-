#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int loss=0;
		for(int x: arr){
			if(x>k){
				loss+= k-x;
			}
		}
		cout<<loss<<endl;
		t--;
	}
	return 0;
}
