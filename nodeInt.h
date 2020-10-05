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

void printList(Node* head){
    Node* p = head;
    cout<<"Linked List is: ";
    while(p!=NULL){
        if(p->next!=NULL)
            cout<<p->data<<" -> ";
        else
            cout<<p->data;

        p = p->next;
    }
    cout<<endl;
}
