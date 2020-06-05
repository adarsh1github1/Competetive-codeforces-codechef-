#include<bits/stdc++.h>
using namespace std;
void seiveofEratosthenes(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++){
		if(prime[p] == true){
			for(int i=p*p;i<=n;i+=p)
				prime[i] = false;
		}
	}
	for(int i=2;i<=n;i++)
		if(prime[i] == true)
			cout<<i<<" ";
}
int main(){
	/*#ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r",stdin);
     freopen("outputf.txt","w",stdout);
 #endif
 */
	int n;
	cin>>n;
	seiveofEratosthenes(n);
	return 0;

}
// complexity - O(n*log(log(n)))
