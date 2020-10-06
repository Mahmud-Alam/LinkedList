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
                Node* t = p->next;
                free(p);
                return t;
            }
            else{
                cout<<endl<<"Key is not found!!!"<<endl;
                return p;
            }
    }
    else if(p->next->next->next==NULL){
            if(p->next->data==key->data){
                Node* t = p->next;
                free(p);
                return t;
            }
            else if(p->next->next->data==key->data){
                Node* t = p->next->next;
                free(p->next);
                p->next = t;
                return p;
            }
            else{
                cout<<endl<<"Key is not found!!!"<<endl;
                return p;
            }
    }
    else{
        while(p->next->next->next!=NULL){
            if(p->next->data==key->data){
                Node* t = p->next;
                free(p);
                cout<<"____________________1st if";
                return t;
            }
            else if(p->next->next->data==key->data){
                Node* t = p->next->next;
                free(p->next);
                p->next = t;
                                cout<<"____________________2nd if";

                return p;
            }
            else if(p->next->next->next->data==key->data){
                Node* t = p->next->next->next;
                free(p->next->next);
                p->next->next = t;
                                cout<<"____________________3rd if";

                return head;
            }
            else{
                                    cout<<"____________________4thh if";

                p = p->next;
            }
        }
        cout<<endl<<"Key is not found!!!"<<endl;
        return p;
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
        else if(v==1){
                cout<<endl<<"Input a key: ";
                cin>>key;
                Node* popHead = popBefore(key,head);
                if(popHead!=NULL)
                    displayList(popHead);
                    displayList(head);
        }
        else{
            cout<<endl<<"Wrong keyword! Type again."<<endl;
        }
    }
}
