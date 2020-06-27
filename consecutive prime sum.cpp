#include<bits/stdc++.h>
using namespace std;
bool isprime(int n) 
{  
    if (n ==2 )  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
int main(){
	int n;
	cin>>n;
	std::vector<int> v;
	for(int i=2;i<n;i++){
		if(isprime(i))
			v.push_back(i); 
	}
	int sum=0,count=0;
	int k = v.size();
	for(int i=0;i<k;i++){
		sum+= v[i];
		if(isprime(sum))
			count++;
	}
	cout<<count;

}
