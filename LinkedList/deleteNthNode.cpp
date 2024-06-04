#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtEnd(Node *&head , int data){
    Node *newNode = new Node(data);
    if(head == NULL){ 
        head = newNode;
        return;
    }
    else{
        Node *temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void toDel(Node* head , int x){
    Node *curr= head;
    Node*prev = NULL;
    for(int i =1 ;i<x;i++){
        prev = curr;
        curr=curr->next;
    }
    prev->next = curr->next;
    delete curr;
    while(head!=NULL){
         cout<<head->data<<" ";
         head=head->next;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    Node *head = NULL;
    for(int i =0;i<n;i++){
        int val ; cin>>val;
    insertAtEnd(head,val);
    }
    int x;
    cin>>x;
    toDel(head,x);
    return 0;
}
