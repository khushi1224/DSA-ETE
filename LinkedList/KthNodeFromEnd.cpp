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
    if (head == NULL){
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
void kthNode(Node*head , int k){
    Node *first = head;
    Node *second = head; 

    for(int i =1;i<k;i++){
        first = first->next;
        if(first==NULL) return;
    }
    while(first->next){
        first=first->next;
        second=second->next;
    }
    cout<<second->data<<endl;
}
int main()
{
    // int n ;
    // cin>>n;
    // Node *head = NULL;
    // for(int i=0;i<n;i++){
    //     int val; cin>>val;
    //     insertAtEnd(head , val);
    // }
    Node *head = NULL;
    int n ;
    while(cin>>n && n!=-1){
        insertAtEnd(head , n);
    }
    int k ;
    cin>>k;
    kthNode(head,k);
    return 0;
}
