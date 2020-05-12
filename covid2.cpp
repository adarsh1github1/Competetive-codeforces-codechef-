#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int j=0;
	int i,n;
	cin>>n;
	vector<int> v(n+1);
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++){
		if(abs(a[i]-a[i+1])<=2){
			v[j]++;
		}
		else{
			j++;
			continue;
		}
	}
	v[j++]=-10;
	int c=0;
	vector<int> f;
	int k=0;
	while(v[k]!=-10){
		c++;
		f.push_back(v[k]);
		k++;
	}
	// vector used to make count of consecutive elements
	
	//cout<<*min_element(f.begin(),f.end())<<" "<<*max_element(f.begin(),f.end())<<endl;
	//for(i=0;i<=n;i++){
	//	cout<<v[i]<<" ";
	//}
	t--;	
	}
}
