#include <bits/stdc++.h>
using namespace std;
struct tree{
	int data;
	tree* left;
	tree* right;
};
tree* create(int x){
	tree* temp = new tree();
	temp->left = NULL;
	temp->right = NULL;
	temp->data = x;
	return temp;
}
tree* insert(tree* root, int x){
	if(root == NULL){
	  return create(x);
	}
	if(root->data>x)
	root->left = insert(root->left,x);
	else if(root->data<x)
	root->right = insert(root->right,x);
	
	return root;	
	}
void inorder(tree* root){
	if(root == NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(tree* root){
	if(root == NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void preorder(tree* root){
	if(root == NULL)
	return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	
}
int maxm(tree* root){
	int max,rmax,lmax,rval;
	if(root!=NULL){
		rval = root->data;
		lmax = maxm(root->left);
		lmax = maxm(root->right);
		if(lmax>rmax)
		max = lmax;
		else
		max = rmax;
		if(rval>max)
		max = rval;
	}
	return max;
}
tree* del(tree* root,int x){
	tree* temp = new tree();
	if(root == NULL)
	return root;
	if(x>root->data)
	del(root->right,x);
	else if(x<root->data)
	del(root->left,x);
	else{
	if(root->left!=NULL && root->right != NULL){
		int t = maxm(root->left);
		root->data = t;
		root->left = del(root->left,t);
	}
	else{
		temp = root;
		if(root->left == NULL){
			root = root->right;
		}
		if(root->right == NULL){
			root = root->left;
		}
		free(temp);
	}
	}
   return root;
}
int main(){
tree* root = new tree();
root = NULL;
	root  = insert(root,50);
	insert(root,60);
	insert(root,70);
	insert(root,30);
	insert(root, 10);
	insert(root, 5);
	insert(root, 80);
	insert(root, 2);
	insert(root,100);
	
inorder(root);
cout<<endl;
postorder(root);
cout<<endl;
del(root, 80);
inorder(root);
	return 0;
}
