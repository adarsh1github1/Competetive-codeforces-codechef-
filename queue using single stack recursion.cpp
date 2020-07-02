#include <bits/stdc++.h>
using namespace std;
class queuestack{
	stack<int> s;
public:
	void enqueue(int x){
		s.push(x);
	}
	int dequeue(){
		if(s.empty())
		{
			cout<<"Queue is empty! "<<endl;
			exit(0);
		}
		int temp = s.top();
		s.pop();
		if(s.empty())
			return temp;
		int item = dequeue();
		s.push(temp);
		return item;

	}
};
int main(){
	queuestack qs;
	qs.enqueue(1);
	qs.enqueue(2);
	qs.enqueue(3);
	qs.enqueue(4);
	cout<<"The element popoed out is "<<qs.dequeue()<<endl;
	cout<<"The element popoed out is "<<qs.dequeue()<<endl;
	cout<<"The element popoed out is "<<qs.dequeue()<<endl;
	return 0;
}