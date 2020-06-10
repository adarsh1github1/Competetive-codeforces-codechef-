int sum(Node* root){
    if(root == NULL)
    return 0;
    return sum(root->left) + sum(root->right) + root->data;
}
bool isSumTree(Node* root)
{
     if(root == NULL)
     return true; 
     int ls = sum(root->left);
     int rs = sum(root->right);
     if(root->data == ls+rs)
     return true;
     else
     return false;
}
