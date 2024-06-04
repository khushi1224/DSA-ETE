#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next = NULL;
    }
};
void insertAtEnd(Node *&head ,int data){
    Node *newNode = new Node(data);
    if (head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
void reverseLL(Node *head){
    Node *curr = head;
    Node*front;
    Node *prev = NULL;
    while(curr!=NULL){
        front = curr->next;
        curr->next = prev;
        prev=curr;
        curr=front;
    }
    Node *temp = prev;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    Node*head=NULL;
    for(int i =0;i<n;i++){
        int val;cin>>val;insertAtEnd(head,val);
    }
    reverseLL(head);
    return 0;
}
