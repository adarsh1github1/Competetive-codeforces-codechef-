#include <bits/stdc++.h>
using namespace std;
class queuestack{
	stack<int> s1,s2;
public:
	void push(int x){
		s1.push(x);
	}
	int pop(){
		if(s1.empty() && s2.empty()){
			cout<<"Queue is empty "<<endl;
			return -1;
		}
		if(s2.empty()){
            while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		}
		int temp = s2.top();
		s2.pop();
		return temp;
	}
};
int main(){
	queuestack qs;
	qs.push(1);
	qs.push(2);
	qs.push(3);
	qs.push(4);
	cout<<"The element popoed out is "<<qs.pop()<<endl;
	cout<<"The element popoed out is "<<qs.pop()<<endl;
	cout<<"The element popoed out is "<<qs.pop()<<endl;
	return 0;
}