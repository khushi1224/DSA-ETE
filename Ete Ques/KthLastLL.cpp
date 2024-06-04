#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node *next;
    Node(int val){
        data = val;
        next =NULL;
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
void kth(Node *head , int k){
    Node *first = head;
    Node *second = head;
    if(head==NULL ||k<=0){
        cout<<"NOT";
    }
    for(int i =0 ; i<k ;i++){
        if(first == NULL) {
            cout<<"NO";
        }
                first = first->next;
    }
    while(first->next){
        second = second->next;
        first=first->next;
    }
    cout<<second->data;
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    int n;
    while(cin>>n && n!=-1){
        insertAtEnd(head,n);
    }
    int k;
    cin>>k;
    kth(head,k);
    return 0;
}
