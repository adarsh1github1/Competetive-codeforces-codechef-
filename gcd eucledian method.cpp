#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main(){
	/*#ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r",stdin);
     freopen("outputf.txt","w",stdout);
 #endif
 */
	int a,b;
	cin>>a>>b;
	cout<<"gcd is "<<gcd(a,b);
	return 0;
}
