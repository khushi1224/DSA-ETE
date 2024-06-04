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
int heightOfBT(treeNode *root){
    if(root==NULL) return 0;
    return (1+ max (heightOfBT(root->left) , heightOfBT(root->right)));
}
int main(int argc, char const *argv[])
{
    treeNode *root = buildTree();
    int height = heightOfBT(root);
    cout<<height;
    return 0;
}
