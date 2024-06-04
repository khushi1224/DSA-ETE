#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode *left , *right;
    treeNode(int val){
        data=val;
        left = right = NULL;
    }
};
treeNode *buildTree(){
    int val ; 
    cin>>val;
    if(val == -1 ) return NULL;
    treeNode *root = new treeNode(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
bool isID(treeNode *r1 , treeNode *r2){
    if(!r1&&!r2) return 1;
    if((!r1&&r2) || (r1&&!r2)) return 0;
    if(r1->data != r2->data) return 0;
    return (isID(r1->left , r2->left) && (isID(r1->right , r2->right)));
}
int main(int argc, char const *argv[])
{
    treeNode * r1 = buildTree();
    treeNode *r2 = buildTree();
    bool id= isID(r1,r2);
    if(id)cout<<"Yes identical";
    else {cout<<"Not Identical";}
    return 0;
}
