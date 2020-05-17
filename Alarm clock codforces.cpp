#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		long int a,b,c,d;
		cin>>a>>b>>c>>d;
		long int ct = 0;
		if(a<=b)
		cout<<b;
		else{
			if(c<d)
			cout<<-1<<endl;
			else{
			
			a = a-b;
			while(a>0){
				a = a- (c-d);
				ct++;
			}
		
			unsigned long long int tot;
			tot = b+ct*c;
			cout<<tot<<endl;
		}
	}
		t--;
	}
	return 0;
}
