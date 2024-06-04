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
int heightOfBT(treeNode *root , bool &valid){
    if(root==NULL) return 0;
    int L = heightOfBT(root->left,valid);
    int R = heightOfBT(root->right,valid);
    if (abs(L-R)>1)
    {
        /* code */
        valid = false;
        return 0;
    }
    return(1+max(L,R));
}
bool isbal(treeNode *root){
    bool valid = true;
    heightOfBT(root , valid);
    return valid;
}

int main(int argc, char const *argv[]) {
    treeNode *root = buildTree();
    if (isbal(root)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}