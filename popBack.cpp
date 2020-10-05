#include<bits/stdc++.h>
#include"LinkedList.h"
using namespace std;
Node* popBack(Node* head){
    Node* p = head;
    if(p==NULL){
        cout<<endl<<"Pop back is not possible. Because ";
        return NULL;
    }
    else if(p->next==NULL){
        free(p);
        cout<<endl<<"List had one item. After popping back, now ";
        return NULL;
    }
    else{
        while(p->next->next!=NULL){
            p = p->next;
        }
        free(p->next);
        p->next = NULL;
    }
    return head;
}
int main(){
    int v;
    Node* head = NULL;
    while(1){
        cout<<"Input value: ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newNode = createNode(v,head);
            head = newNode;
            printList(head);
        }
    }
    int key;
    cout<<endl<<"Do you want to Pop back?(If \"Yes type 1\", If \"No type 0\") : ";
    while(1){
        cin>>key;
        if(key==0)
            break;
        else if(key==1){
            Node* popHead = popBack(head);
            if(popHead==NULL){
                cout<<"List is empty!!!"<<endl;
                head = NULL;
            }
            else if(popHead!=NULL){
                printList(head);
            }
        }
        else{
            cout<<endl<<"Wrong keyword!!!"<<endl;
        }
        cout<<endl<<"Do you want to Pop back Again?(If \"Yes type 1\", If \"No type 0\") : ";
    }
}
