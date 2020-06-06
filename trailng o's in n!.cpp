#include<bits/stdc++.h>
using namespace std;
int trailos(int n){
	if(n==0)
		return 1;
int i=5,count=0;
	while(i<=n){
		count+=n/i;
		i*=5;
	}
	return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<"Trailing 0's are "<<trailos(n);
	return 0;
}
