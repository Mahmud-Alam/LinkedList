#include<bits/stdc++.h>
#include"LinkedList.h"
using namespace std;

Node* popFront(Node* head){
    Node* p = head, *t;
    if(p==NULL){
        cout<<endl<<"Pop front is not possible. Because ";
        return NULL;
    }
    else if(p->next==NULL){
        free(p);
        cout<<endl<<"List had one item. After popping, Now ";
        return NULL;
    }
    else if(p->next!=NULL){
        t = p->next;
        free(p);
    }
    return t;
}
int main(){
    int v;
    Node* head = NULL;
    while(1){
        cout<<"Input a value(1024 to stop): ";
        cin>>v;
        if(v==1024)
            break;
        else{
            Node* newNode = createNode(v,head);
            head = newNode;
            printList(head);
        }
    }
    Node* node = popFront(head);
    if(node==NULL){
        cout<<"List is empty!!!"<<endl;
    }
    else{
            printList(node);
    }
}
