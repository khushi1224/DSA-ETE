#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode *left , *right;
    treeNode(int val){
        data = val;
        left = right = NULL;
    }
};
treeNode *buildTree(){
    int val; cin>>val;
    if(val == -1) return NULL;
    treeNode *root = new treeNode(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int countLeafNode(treeNode *root){
    if (root==NULL) return 0;
    if(!root->right && !root->right){return 1;}
    return (countLeafNode(root->left) + countLeafNode(root->right));
}
int countNonLeafNode(treeNode *root){
    if(root == NULL) return 0;
    if(!root->left && !root->right) return 0;
    return(1+ countNonLeafNode(root->left) + countNonLeafNode(root->right));
}
int main(int argc, char const *argv[])
{
    treeNode *root = buildTree();
    int LeafNode = countLeafNode(root);
    cout<<LeafNode<<endl;
    int non = countNonLeafNode(root);
    cout<<non;
    return 0;
}
