#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void printList(Node *n){
    while(n!=NULL){
    cout<<n->data<<" ";
    n = n->next;
    }
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head -> data = 5;
    head->next = second;
    second -> data = 6;
    second->next=third;
    third->data =7;
    third->next=NULL;
    printList(head);
    return 0;
}
