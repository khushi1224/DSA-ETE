#include<iostream>
using namespace std;
class Node{
    public:
    int data;
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
    Node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
}
void rotateLL(Node*head,int k){
    if (head==NULL) return;
    else if(k==0) return;
    int len = 1;
    Node *temp=head;
    Node *tail=head;
    while(temp->next){
        len++;
        temp = temp->next;
    }
    temp->next = head;
    k = k %len;
    for(int i =1;i<len-k;i++){
        tail = tail->next;
    }
    head = tail->next;
    tail->next=NULL;
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;
    Node *head=NULL;
    for(int i=0;i<n;i++){
        int val; cin>>val;
        insertAtEnd(head,val);
    }
    int k ;
    cin>>k;
    rotateLL(head,k);
    return 0;
}
