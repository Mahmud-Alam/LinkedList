#include<bits/stdc++.h>
#include"nodeInt.h"
using namespace std;

Node* insertBeforeNode(int KEY, int VALUE, Node* head){
    Node* key = new Node(KEY);
    Node* value = new Node(VALUE);
    Node* h = head;
    while(h->next!=NULL){
        if(h->data == key->data){
            value->next = h;
            return value;
            break;
        }
        else if(h->next->data == key->data){
            value->next = h->next;
            h->next = value;
            return head;
            break;
        }
        else{
            h=h->next;
        }
    }
    return NULL;
}
int main(){
    Node* head = new Node(1);
    Node* head2 = new Node(2);
    Node* head3 = new Node(3);
    head->next = head2;
    head2->next = head3;

    printList(head);

    int key,value;
    cout<<endl<<"Input a key  : ";
    cin>>key;
    cout<<"Input a value: ";
    cin>>value;
    Node* node = insertBeforeNode(key,value,head);
    cout<<endl;
    if(node==NULL)
        cout<<"Key is not found!"<<endl;
    else
        printList(node);
}
