#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next=NULL;
    }
};
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    Node *head = NULL;
    for(int i =0 ; i<5;i++){
    if(head == NULL){
        head = new Node(arr[i]);
    }
    else{
        Node *temp = new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
    }
    while(head){
    for(int i =0 ; i<5;i++){
        cout<<head->data<<endl;
        head = head->next;
    }
    }
    return 0;
}
