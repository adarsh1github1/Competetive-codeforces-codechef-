 #include <bits/stdc++.h>
using namespace std;
class stackqueue{	
	queue<int> q1,q2;
	int curr_size;
public:
	stackqueue(){
		curr_size = 0;
	}
	void enqueue(int x){
		q1.push(x);
		curr_size++;
	}
	void dequeue(){
		if(q1.empty()){
			return;
		}
		while(q1.size()!= 1){
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();
		curr_size--;
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}
	bool isempty(){
		if(curr_size = 0)
			return true;
		else
		return false;
	}
	int top(){
		if(q1.empty())
			return -1;
		while(q1.size() != 1){
			q2.push(q1.front());
			q1.pop();
		}
		int temp = q1.front();
		q2.push(temp);
		q1.pop();
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
		return temp;
	}
	int size(){
		return curr_size;
	}

};
int main(){
	stackqueue sq;
	sq.enqueue(1);
	sq.enqueue(2);
	sq.enqueue(3);
	sq.enqueue(4);
	cout<<"Current size is "<<sq.size()<<endl;
	cout<<"Top is "<<sq.top()<<endl;
	sq.dequeue();
	cout<<"Top is "<<sq.top()<<endl;
	sq.dequeue();
	cout<<"Top is "<<sq.top()<<endl;
	sq.dequeue();
	cout<<"Top is "<<sq.top()<<endl;
	return 0;
}