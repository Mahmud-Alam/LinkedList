#include<bits/stdc++.h>
#include"LinkedList.h"
using namespace std;

//_______________Pop Before Function________________


Node* popBefore(int KEY, Node* head){
    Node* key = new Node(KEY);
    Node* p = head;
    if(p==NULL){
        cout<<endl<<"Pop before node is not possible. Because List is empty!"<<endl;
        return NULL;
    }
    else if(p->next==NULL){
        cout<<endl<<"List has one item, So, Pop before node is not possible."<<endl;
        return p;
    }
    else if(p->data==key->data){
        cout<<endl<<"1st node cannot pop. Try another node!"<<endl;
        return p;
    }
    else if(p->next->next==NULL){
            if(p->next->data==key->data){
                Node* temp = p->next;
                free(p);
                return temp;
            }
            else{
                cout<<endl<<"Key is not found!!!"<<endl;
                return p;
            }
    }
    else{
        while(p->next->next!=NULL){
            if(p->next->data==key->data){
                Node* temp = p->next;
                free(p);
                return temp;
            }
            else{
                p = p->next;
            }
        }
        if(p->next->data==key->data){
            Node* temp = p->next;
            free(p);
            return temp;
        }
        else{
            cout<<endl<<"Key is not found!!!"<<endl;
            return p;
        }
    }
}
int main(){
    int v,key;
    Node* head = NULL;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newNode = createLinkedList(v,head);
            head = newNode;
            displayList(head);
        }
    }
    while(1){
        cout<<endl<<"Do you want to pop a node, before any key?(If \"YES type 1\", or if \"No type 0\") : ";
        cin>>v;
        if(v==0)
            break;
        else{
            cout<<endl<<"Input a key: ";
            cin>>key;
            Node* popHead = popBefore(key,head);
            if(popHead!=NULL)
                displayList(popHead);
           // displayList(head);
        }
    }
}
