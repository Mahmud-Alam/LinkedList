#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        next = NULL;
    }
    Node(int value){
        data = value;
        next = NULL;
    }
    ~Node();
};
void displayList(Node* head){
    cout<<endl<<"Linked List is: ";
    while(head!=NULL){
        if(head->next!=NULL)
            cout<<head->data<<" -> ";
        else
            cout<<head->data;

        head = head->next;
    }
    cout<<endl<<endl;
}

//_________________Create Reverse Linked List Function__________________


Node* createReverseLinkedList(int value,Node* head){
    Node* node = new Node(value);
    if(head==NULL){
        head=node;
    }
    else{
        node->next= head;
    }
    return node;
}

