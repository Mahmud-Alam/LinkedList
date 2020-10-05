#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
    ~Node();
};
void printList(Node* p){
    while(p!=NULL){
        if(p->next!=NULL)
            cout<<p->data<<" -> ";
        else
            cout<<p->data;

        p = p->next;
    }
    cout<<endl;
}
Node* insertBack(int value,Node* head){
    Node* node = new Node(value);
    Node* p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = node;
    return head;
}
int main(){
    Node* head = new Node(5);
    Node* head2 = new Node(1);
    Node* head3 = new Node(2);
    head->next = head2;
    head2->next = head3;
    printList(head);

    int value;
    cin>>value;
    Node* h = insertBack(value, head);
    printList(h);
}
