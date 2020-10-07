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

Node* createLinkedList(int value, Node* head){
    Node* newNode = new Node(value);
    Node* p = head;
    if(head==NULL){
        head = newNode;
    }
    else{
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = newNode;
    }
    return head;
}

void displayList(Node* head){
    Node* p = head;
    if(head==NULL){
        cout<<endl<<"List is empty!"<<endl;
    }
    else{
        cout<<endl<<"LinkedList is: ";
        while(p!=NULL){
            if(p->next==NULL)
                cout<<p->data;
            else
                cout<<p->data<<" -> ";
            p = p->next;
        }
        cout<<endl;
    }
}

int main(){
    Node* head = NULL;
    int v;
    while(1){
        cout<<endl<<"Input a value(1024 to stop) : ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newNode = createLinkedList(v,head);
            head = newNode;
            displayList(head);
        }
    }
}
