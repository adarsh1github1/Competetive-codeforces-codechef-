#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};
node* head;
node* create(int x){
	node* temp = new node();
	temp->next= NULL;
	temp->prev = NULL;
	temp->data = x;
	return temp;
}
void insert_begin(int x){
	node* temp = create(x);
	if(head == NULL)
	head = temp;
	else{
		head->prev = temp;
		temp->next = head;
		head = temp;
	}
}
void insert_end(int x){
	node* temp1 = create(x);
	node* temp = new node();
	temp = head;
	if(head == NULL){
		head = temp1;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = temp1;
	temp1->prev = temp;
}
void printlist(){
	node* temp = new node();
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp= temp->next;
	}
}
void printrev(){
	node* temp= new node();
	temp=head;
	if(temp==NULL)
	return;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->prev;
	}
}
int main(){
     node* head = new node();
	 head = NULL;
	 insert_begin(1);
	 insert_begin(2);
	 insert_begin(3);
	 insert_begin(4);
	 insert_end(5);
	 printlist();
	 printrev();
	return 0;
}
