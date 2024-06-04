
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next =NULL;
    }
};
void insertAtEnd(Node *&head , int data){
    Node* newNode = new Node(data);
    if (head == NULL){
        head = newNode;
        return;
    }
    Node*temp = head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next = newNode;
}
Node *reverseLL(Node *head){
    //1 2 3 4 
    Node *curr = head;
    Node *prev = NULL;
    Node *front = NULL;
    if(head==NULL || head->next==NULL){
        return head;
    }
    while(curr){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    return prev;
}
Node* middle(Node *head){
    Node *slow=head;
    Node *fast = head;
    if(head == NULL || head->next == NULL) return head;
    while(fast&&fast->next){
        slow = slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    Node *head=NULL;

    for(int i =0 ;i<n;i++){
        int val; cin>>val;
        insertAtEnd(head,val);
    }
    Node *temp = head;
    Node *mid = middle(head);
    Node *rev = reverseLL(mid);
    bool ispal = true;
    while(rev){
        if(temp->data != rev->data){
            ispal = false;
            break;
        }
        temp = temp->next;
        rev = rev->next;
    }
    if(ispal) cout<<"Pal";
    else{ cout<<"Not";}
    return 0;
}
