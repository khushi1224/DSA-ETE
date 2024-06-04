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
    int val;
    cin>>val;
    if(val==-1)
    return NULL;
    treeNode *root = new treeNode(val);
    // left side;
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void preOrder(treeNode *root){
    if(root==NULL)
    return;
    // n l r
    cout<<root->data<<" ";
    // left;
    preOrder(root->left);
    // right;
    preOrder(root->right);

}
void inOrder(treeNode *root){
    if(root==NULL) return;
    // l n r;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(treeNode *root){
    if(root==NULL) return;
    //  l r n;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(int argc, char const *argv[])
{
    treeNode *root = buildTree();
    cout<<"PRE - ORDER"<<endl;
    preOrder(root);
    cout<<"POST - ORDER"<<endl;
    postOrder(root);
    cout<<"IN - ORDER"<<endl;
    inOrder(root);
    return 0;
}
