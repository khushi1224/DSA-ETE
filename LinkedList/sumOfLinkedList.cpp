#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val ;
        next = NULL;
    }
};
void insertAtEnd(Node *&head , int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
}
Node *reverse(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *front = NULL;
    while(curr){
        front = curr->next;
        curr->next = prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
// 1 2 3 
// 5 6 7
Node * add(Node *&head1 , Node *&head2){
    int carry = 0;
    
}