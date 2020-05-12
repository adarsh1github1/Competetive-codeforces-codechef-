#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=5,x,y;
	while(t>0){
		int i;
		int a[5];
		for(i=0;i<5;i++){
			cin>>a[i];
			if(a[i]==1){
			x=t;
			y=i+1;
			}
		}
	t--;
	}
	int min = abs((3-x))+abs((3-y));
	cout<<min;
	return 0;
}
