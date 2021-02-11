void fun(Node* root,vector<int>&v)
{
if(root==NULL)
return ;

fun(root->left,v);
v.push_back(root->data);
fun(root->right,v);
}

// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{
// Your code here
vector<int>v;
fun(root,v);
return v;
}


/*https://practice.geeksforgeeks.org/problems/inorder-traversal/1#*/
