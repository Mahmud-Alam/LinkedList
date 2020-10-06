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

//________________Display fucntion___________________


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

//_________________Create Linked List Function__________________


Node* createLinkedList(int value,Node* head){
    Node* node = new Node(value);
    Node* p = head;
    if(p==NULL){
        p=node;
        return p;
    }
    else{
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = node;
    }
    return head;
}
