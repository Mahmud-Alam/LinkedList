#include"LinkedList.h"

//______________Pop Any Node Function_______________//

Node* popAnyNode(int key, Node* head){
    Node* p = head;
    if(p->next==NULL){
        if(p->data == key){
            free(p);
            return NULL;
        }
        else{
            cout<<endl<<"Key is not found!"<<endl;
            return p;
        }
    }
    else if(p->next->next==NULL){
        if(p->data == key){
            Node* t = p->next;
            free(p);
            return t;
        }
        else if(p->next->data == key){
            free(p->next);
            p->next = NULL;
            return p;
        }
        else{
            cout<<endl<<"Key is not found!"<<endl;
            return p;
        }
    }
    else{
        while(p->next->next!=NULL){
            if(p->data == key){
            Node* t = p->next;
            free(p);
            return t;
            }
            else if(p->next->data == key){
                Node* t = p->next->next;
                free(p->next);
                p->next  = t;
                return head;
            }
            else if(p->next->next->next==NULL){
                if(p->next->next->data==key){
                    free(p->next->next);
                    p->next->next = NULL;
                    return head;
                }
                else{
                    cout<<endl<<"Key is not found!"<<endl;
                    return head;
                }
            }
            else
                p = p->next;
        }
    }
}
int main(){
    int v,key;
    Node* head = NULL;
    while(1){
        cout<<endl<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead = createLinkedList(v,head);
            head = newHead;
            displayList(head);
        }
    }
    if(head==NULL)
        cout<<endl<<"List is empty! Pop any Node is not possible."<<endl;
    else{
        cout<<endl<<"Do you want to Pop any Node?(If \"YES type 1\",If \"NO type 0\"): ";cin>>v;
        while(1){
            if(v==0)
                break;
            else if(v==1){
                cout<<endl<<"Input a key, which you want to pop: ";cin>>key;
                Node* newHead = popAnyNode(key,head);
                head = newHead;
                displayList(head);
            }
            else
                cout<<endl<<"Wrong keyword! Type again."<<endl;
            cout<<endl<<"Do you want to Pop any Node again?(If \"YES type 1\",If \"NO type 0\"): ";cin>>v;
        }
    }
}
