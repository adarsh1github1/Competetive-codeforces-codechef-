#include<bits/stdc++.h>
using namespace std;
#define size 101
class que{
private:
	int rear,front;
	int a[size];
public:
	que(){
		rear = -1;
		front = -1;
		}
	bool isempty(){
		return (rear == -1 && front == -1);
	}
	bool isfull(){
		return (rear+1)%size == front ? true:false;
	}
	void enq(int x){
		if(isfull()){
		cout<<"Queue is full"<<endl;
		return;
		}
		if(isempty())
	    rear = front = 0;
	    else
		rear = (rear+1)%size;
		a[rear] = x;
	}
	void deq(){
		if(isempty()){
		cout<<"Queue is empty \n";
	    return;
		}
		else if(rear == front)
			rear = front = -1;
		else
		front = (front+1)%size;
	}
	void printq(){
		int count = (rear + size - front)% size + 1;
		for(int i = 0;i<count;i++){
			int index = (front + i)%size;
			cout<<a[index]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	que q;
	q.enq(1);
	q.enq(2);
	q.enq(3);
	q.enq(4);
	q.enq(5);
	q.printq();
	q.deq();
	q.printq();
	return 0;
}
