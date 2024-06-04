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
void insertAtEnd(Node*&head,int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp=head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next=newNode;
}
void findTriplet(Node *h1 , Node *h2 , Node *h3 , int k){
    Node *p1 =h1;

    while(p1){
        Node *p2 = h2;
        while(p2){
        Node *p3 = h3;
            while(p3){
                int sum = p1->data+ p2->data +p3->data;
                if(sum==k){
                    cout<<p1->data<<" "<<p2->data<<" "<<p3->data<<" ";
                    return;
                }
                p3=p3->next;
            }
            p2=p2->next;
        }
        p1= p1->next;
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
    int target;cin>>target;findTriplet(h1,h2,h3,target);
    return 0;
}
