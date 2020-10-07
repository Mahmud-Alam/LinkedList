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

Node* createNode(int value, Node* head){
    Node* newNode = new Node(value);
    if(head==NULL){
        head = newNode;
    }
    else{
        head->next = newNode;
    }
    return head;
}

void displayList(Node* head){
    Node* p = head;
    if(head==NULL){
        cout<<endl<<"List is empty!"<<endl;
    }
    else{
        while(p!=NULL){
            if(p->next==NULL)
                cout<<"LinkedList is: "<<p->data;
            else
                cout<<"LinkedList is: "<<p->data<<" -> ";
        }
        cout<<endl;
    }
}
