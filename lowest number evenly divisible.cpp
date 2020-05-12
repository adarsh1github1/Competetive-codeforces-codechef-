#include<bits/stdc++.h>
using namespace std;
long long  gcd(long long a, long long b){
	if(b==0)
	return a;
	return gcd(b,a%b);
}
long long getSmallestDivNum(long long n)
{
    long long  ans = 1;
    for(int i=2;i<=n;i++){
    	ans = (((i * ans)) / (gcd(i, ans)));
	}
	return ans;
}
int main(){
	long long n;
	cin>>n;
	cout<<getSmallestDivNum(n);
	return 0;
}
