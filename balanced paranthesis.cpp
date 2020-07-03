#include <bits/stdc++.h>
using namespace std;

void paranthesis(string s){
	if(s.size() == 0){
		cout<<"balanced"<<endl;
		return;
	}
	stack<char> st;
	for(int i=0;i<s.length();i++){
		switch (s[i]){
			case '[': 
			          st.push(s[i]);
			          break;
			case '{' :
			           st.push(s[i]);
			           break;
			case '(':
			           st.push(s[i]);
			           break;
			case ']' :
			           if(st.empty()){
			           	cout<<"not balanced";
			           	return; 
			           }
			           if(st.top() != '['){
			           	cout<<"not balanced";
			           	return;
			           }
			           st.pop();
			           break;
			case '}': 
			           if(st.empty()){
			           	cout<<"not balanced";
			           	return; 
			            }
			           if(st.top() != '{'){
			           	cout<<"not balanced";
			           	return;
			           }
			           st.pop();
			           break;
			case ')' :  
			           if(st.empty()){
			           	cout<<"not balanced";
			           	return; 
			           }
			           if(st.top() != '('){
			           	cout<<"not balanced";
			           	return;
			           }
			           st.pop();
			           break;      
			           
		}
	}
	if(!st.empty())
		cout<<"not balanced";
	else
		cout<<"balanced";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		paranthesis(s);
		cout<<endl;
	}
	return 0;
}