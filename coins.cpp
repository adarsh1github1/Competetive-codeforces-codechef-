#include <bits/stdc++.h>
using namespace std;
int coins(int n){
	int diff,diff_max,big1=0,smal2=0;
	int i,j,c=1,x1=0,s2=0;
	if(n==2){
		big1+=pow(2,1);
		smal2+=pow(2,2);
	}
	else{
		x1+=pow(2,n);
		s2+=pow(2,n-1);
		//diff_max=x1-s2;
		big1=x1,smal2=s2;
		i=1;
		while(c!=n/2){
			big1+=pow(2,i);
			smal2+=pow(2,n-1-i);
			i++;
			c++;
		}
		
	}		
	diff=abs(big1-smal2);
		
	return diff;
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int x;
		x = coins(n);
		cout<<x<<endl;
		t--;
	}
	
}
