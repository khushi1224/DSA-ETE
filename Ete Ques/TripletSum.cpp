#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node (int val){
        data=val;
        next=NULL;
    }
};
void insertAtEnd(Node *&head , int data){
    Node *newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node*temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
}
void TripletSum(Node *l1 , Node *l2 ,Node*l3 , int k){
    Node *t1 = l1;
    while(t1){
    Node *t2 = l2;
    while(t2){
    Node *t3 = l3;
    while(t3){
    int sum = t1->data + t2->data+t3->data;
    if(sum == k){
        cout<<t1->data<<" "<<t2->data<<" "<<t3->data<<endl;
        return;
    }
    t3 = t3->next;
    }
    t2= t2->next;
    }
    t1 = t1->next;
    }
}
int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    Node *h1 = NULL;
    Node *h2= NULL;
    Node *h3= NULL;
    for(int i=0;i<n1;i++){
        int val; cin>>val;
        insertAtEnd(h1,val);
    }
     for(int i=0;i<n2;i++){
        int val; cin>>val;
        insertAtEnd(h2,val);
    }
     for(int i=0;i<n3;i++){
        int val; cin>>val;
        insertAtEnd(h3,val);
    }
    int target;cin>>target;TripletSum(h1,h2,h3,target);
    return 0;
}
