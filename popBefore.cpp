#include<bits/stdc++.h>
#include"LinkedList.h"
using namespace std;

//_______________Pop Before Function________________//
//___________________ERROR SOlved___________________//
// ERROR: the error was occur, when head pop and the new return head, had not placed right.
//        Every time, the old head, took place. but actually old head was popped(removed),
//        so old head store some garbage value, which is took place as head. and those garbage values were repeated
//        Thats why, full linked list had lost and only one element took place........//

// SOLUTION: in main, return newhead set as head. [head = newHead;]
//           This is how, old head replaced by new return head, and looped is worked now with the replace new head.


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
                return t;
            }
            else if(p->next->next->data==key->data){
                Node* t = p->next->next;
                free(p->next);
                p->next = t;
                return head;
            }
            else if(p->next->next->next->data==key->data){
                Node* t = p->next->next->next;
                free(p->next->next);
                p->next->next = t;
                return head;
            }
            else{
                p = p->next;
            }
        }
        cout<<endl<<"Key is not found!!!"<<endl;
        return head;
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
                Node* newHead = popBefore(key,head);        //ERROR_point________________________________________________________________________
                head = newHead;                            //old head is replaced by  new return newHead, so loop is worked with the newHead now.
                if(head!=NULL)
                    displayList(head);
        }
        else{
            cout<<endl<<"Wrong keyword! Type again."<<endl;
        }
    }
}
