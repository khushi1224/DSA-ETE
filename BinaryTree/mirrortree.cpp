#include<iostream> 
using namespace std;
class treeNode{
    public:
    int data ;
    treeNode *left , *right;
    treeNode(int val){
        data = val;
        left = right = NULL;
    }
};
treeNode *buildTree(){
    int val ;
    cin>>val;
    if(val==-1) return  NULL;
    treeNode *root = new treeNode(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void mirror(treeNode *root){
    if(root==NULL) return;
    treeNode *temp = root->left;
    root->left= root->right;
    root->right = temp;
    mirror(root->left);
    mirror(root->right);
}
void printTree(treeNode *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}
int main(int argc, char const *argv[])
{
    treeNode *root = buildTree();
    printTree(root);
    cout<<endl;
    mirror(root); 
    printTree(root);
}
