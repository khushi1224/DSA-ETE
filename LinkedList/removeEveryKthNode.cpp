#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next = NULL;
    }
};
void insertAtEnd(Node *&head , int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node*temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next = newNode;
}
void removeEverKNode(Node *head , int k){
    int count = 1;
    Node*tail=head;
    Node*pre=NULL;
    if(head==NULL)return;
    while(tail->next){
        if (k==count){
            pre->next=tail->next;
            delete tail;
            tail=pre->next;
            count=1;
        }
        else{
            count++;
            pre=tail;
            tail=tail->next;
        }
    }
    while(head->next){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    int n ;
    while(cin>>n && n!=-1){
        insertAtEnd(head , n);
    }
    int k;
    cin>>k;
    removeEverKNode(head,k);
    return 0;
}
