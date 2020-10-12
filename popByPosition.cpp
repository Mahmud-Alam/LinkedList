#include"LinkedList.h"

//_____________POP by Position____________//


Node* popByPosition(int pos, Node*head){
    int c = 0;
    Node* p = head;
    if(p->next==NULL){
        if(pos==c){
            free(p);
            cout<<endl<<"Pop is done! Now list is empty."<<endl;
            return NULL;
        }
        else{
            cout<<endl<<"Position is not found!"<<endl;
            return head;
        }
    }
    else if(p->next->next == NULL){
        if(pos==c){
            Node* temp = p->next;
            free(p);
            return temp;
        }
        else if(pos==1){
            free(p->next);
            p->next = NULL;
            return p;
        }
        else{
            cout<<endl<<"Position is not found!"<<endl;
            return head;
        }
    }
    else{
        while(p->next->next!=NULL){
            c++;
            if(pos == 0){
                Node* temp = p->next;
                free(p);
                return temp;
            }
            else if(pos == c){
                Node* temp = p->next->next;
                free(p->next);
                p->next = temp;

                return head;
            }
            else{
                p = p->next;
            }
        }
        c++;
        if(pos == c){
            free(p->next);
            p->next = NULL;
            return head;
        }
        else{
            cout<<endl<<"Position is not found!"<<endl;
            return head;
        }
    }
}
int main(){
    int v,pos;
    Node* head = NULL;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead = createLinkedList(v,head);
            head = newHead;
            displayList(head);
        }
    }
    if(head == NULL)
        cout<<endl<<"List is empty!"<<endl;
    else{
        cout<<endl<<"Do you want to pop any node by index number?(If YES type 1, if NO type 0): ";cin>>v;
        while(1){
            if(v==0)
                break;
            else if(v==1){
                if(head == NULL){
                    cout<<endl<<"List is empty! Pop is not possible."<<endl;
                }
                else{
                    cout<<endl<<"Input a index: ";cin>>pos;
                    Node* newHead = popByPosition(pos,head);
                    head = newHead;
                    if(head!=NULL)
                        displayList(head);
                }
            }
            else{
                cout<<endl<<"Wrong keyword! Type again."<<endl;
            }
            cout<<endl<<"Do you want to pop any node by index number Again?(If YES type 1, If NO type 0): ";cin>>v;
        }
    }
}
