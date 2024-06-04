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
    //  left side:
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int sumBT(treeNode *root){
    if(root==NULL) return 0;
    return (root->data  + sumBT(root->left) + sumBT(root->right));
}
int main(int argc, char const *argv[])
{
    treeNode *root = buildTree();
    int sum = sumBT(root);
    cout<<"Sum of BT is: "<<sum;
    return 0;
}
