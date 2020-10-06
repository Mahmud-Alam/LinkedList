#include<bits/stdc++.h>
#include"nodeInt.h"
using namespace std;

//________________Find Node Function______________


Node* findNode(int KEY, Node* head){
    Node* key = new Node(KEY);
    Node* p = head;
    while(p->next!=NULL){
        if(p->data==key->data){
            return p;
            break;
        }
        else if(p->next->data==key->data){
            return p->next;
            break;
        }
        else{
            p=p->next;
        }
    }
    return NULL;
}


//_________________Add After Node Function___________________


void addAfterNode(int VALUE, Node* head){
    Node* value = new Node(VALUE);
    value->next = head->next;
    head->next = value;
}
int main(){
    Node* head = new Node(1);
    Node* head2 = new Node(2);
    Node* head3 = new Node(3);
    head->next = head2;
    head2->next = head3;

    displayList(head);

    int key,value;
    cout<<endl<<"Input a key  : ";
    cin>>key;
    Node* finding = findNode(key,head);
    cout<<endl;
    if(finding==NULL){
        cout<<"Key is not found!!!"<<endl;
    }
    else{
        cout<<"Input a value: ";
        cin>>value;
        addAfterNode(value, finding);

        displayList(head);
    }
}
