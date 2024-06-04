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
int heightTree(treeNode *root , int&valid){
    if(root==NULL) return 0;
    int L = heightTree(root->left,valid);
    int r = heightTree(root->right , valid);
    if(abs(L-r)>1){
        valid = 0;
    }
    return 1 + max(L,r);
}
bool isBal(treeNode *root){
    int valid = 1;
    heightTree(root , valid);
    return valid;
}
int main(int argc, char const *argv[])
{
    treeNode *root = buildTree();
    bool bal = isBal(root);
    if(bal){
        cout<<"True";
    }
    else{
        cout<<"False";
            }
    return 0;
}
