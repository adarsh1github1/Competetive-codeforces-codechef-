#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* insert_begin(Node* head, int x){
	Node* temp = new Node();
	temp->data = x;
	if(head ==NULL){
		head=temp;
		temp->link = NULL;
	}
	else{
		temp->link = head;
		head = temp;
	}
	return head;
}
Node* insert_n(Node* head,int x,int n){
    int count=0;
	Node* temp = new Node();
    temp->data = x;
    Node* temp1 = new Node();
    temp1= head;
    while(count!=n-1){
    	temp1 = temp1->link;
    	count++;
	}
	temp->link = temp1->link;
	temp1->link = temp;
    
    return head;
}
Node* insert_end(Node* head, int x){
	Node* temp = new Node();
	temp->data = x;
	temp->link = NULL;
	if(head==NULL){
		head = temp;
	}
	else{
		Node* temp1 = new Node();
		temp1 = head;
		while(temp1->link != NULL){
			temp1 = temp1->link;
		}
		temp1->link = temp;
	}
	return head;
}
Node* del(Node* head, int x){
	Node* temp = new Node();
	Node* prev = new Node();
	temp = head;
	if(temp!=NULL && temp->data == x){
		head = temp->link;
		free(temp);
		return head;
	}
	while(temp->data!=x)
	{
		prev = temp;
		temp = temp->link;
	}
	prev->link = temp->link;
	free(temp);
	return head;
} 

void printlist(Node* head,Node* temp){
	while(temp !=NULL){
		cout<<temp->data<<endl;
		temp= temp->link;
	}
}	
int main(){
	Node* head = new Node();
	head = NULL;
	head = insert_end(head,5);
	head = insert_end(head,6);
	head = insert_end(head,7);
	head = insert_end(head,8);
	head = insert_begin(head,4);
	head = insert_begin(head,3);
	head = insert_n(head,10,4);
	head = insert_end(head,11);
	head = insert_end(head,12);
	head = del(head, 7);
	Node* temp = new Node();
	temp=head;
	printlist(head,temp);
	return 0;
}
