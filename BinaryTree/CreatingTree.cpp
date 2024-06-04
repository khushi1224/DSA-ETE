#include<iostream>
using namespace std;
class treeNode
{
public:
int data;
treeNode *left , *right;
treeNode(int val){
    data = val;
    left=right=NULL;
}
};
treeNode * buildTree(){
    int val; cin>>val;
    if (val ==-1) 
    return NULL;
    treeNode *root = new treeNode(val);
    //  left side;
    root->left = buildTree();
    //  right side;
    root->right = buildTree();
    return root;
}