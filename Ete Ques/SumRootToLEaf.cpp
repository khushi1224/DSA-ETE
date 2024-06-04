#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode *left , *right;
    treeNode(int val){
        data = val;
        left = right =NULL;
    }
};
treeNode * buildTree(){
    int val; cin>>val;
    if(val==-1) return NULL;
    treeNode *root = new treeNode(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int total(treeNode *root){
    sum(root,0);
    cout<<total;

}
void sum(treeNode *root , int cur){
    int cur = 0;
    int total =0;
    if(root==NULL) return;
    cur= cur* 10 + root->data;
    if(root->left==NULL && root->right == NULL){
        total += cur;
    }
    sum(root->left , cur);
    sum(root->right ,cur);
}