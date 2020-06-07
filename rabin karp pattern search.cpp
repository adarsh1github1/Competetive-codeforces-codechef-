#include <bits/stdc++.h> 
using namespace std;
#define d 256
void rabin_karp(string s, string p){
	int n = s.length();
	int m = p.length();
	int q = 101; // prime number
	int h =1;
	int i,j;
	int count=0;
	// for value of h i.e. h = pow(d,m-1)%q
	for(i=0;i<m-1;i++)
		h = (h*d)%q;
	// for hash value of pattern and 1st window of string s
	int x=0,t=0;
	for(i=0;i<m;i++){
		x = (d*x + p[i])%q;
		t = (d*t + s[i])%q;
	}
	for(i=0;i<n-m;i++){
		if(x==t){
			for(j=0;j<m;j++){
				if(s[i+j] != p[j])
					break;
			}
				if(j==m){
					cout<<"pattern found at index "<<i<<endl;
					count++;
				}
			}
			
			// hash value of next window
			if(i<n-m){
				t = (d*(t -s[i]*h) + s[i+m])%q;
				if(t<0)
				t=t+q; 
			}
		
	}
}
int main(){
/*#ifndef ONLINE_JUDGE
    freopen("inputf.txt","r",stdin);
    freopen("outputf.txt","w",stdout);
#endif
*/	
	string s = "aabbbaaabaabaa";
	string p = "aab";
	rabin_karp(s,p);
	return 0;
}
