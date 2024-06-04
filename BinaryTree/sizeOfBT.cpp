#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode *left  , *right;
    treeNode(int val){
        data = val;
        left = right = NULL;
    }
};
treeNode *buildTree(){
    int val; cin>>val;
    if(val == -1){
        return NULL;
    }
    treeNode *root = new treeNode(val);
    // left side:
    root->left = buildTree();
    // right side:
    root->right = buildTree();
    return root;
}
int treeSize(treeNode *root){
    //  1 + left side + right side:
    if(root == NULL) return 0;
    return (1 + treeSize(root->left) + treeSize(root->right));
}
int main(int argc, char const *argv[])
{
    treeNode *root =  buildTree();
    int sizeOfTree = treeSize(root);
    cout<<"Size of the Binary Tree is: "<<sizeOfTree<<endl;
    return 0;
}

