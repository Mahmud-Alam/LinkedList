#include"LinkedList.h"

//||||||||||||||||||||Error solved and detail explanation|||||||||||||||||||||||||||||||||||

//____________Pop Repeated Nodes_____________//

Node* popRepeatedNodes(Node* head){
    Node* p = head;
    if(p->next==NULL)
        return head;
    else{
        while(p!=NULL && p->next!=NULL){             //p!=NULL na dile(1->1->1->1) = (1->NULL) hoye 2nd loop theke ber hoy
            Node* q = p;                            //But 1st loop er moddhe condition(1->next!=NULL) ERROR hoy,karon ekhane (1->next==NULL) hbe.
            while(q->next!=NULL){                  //tai condition (P!=NULL) o dite hbe, jeno 1st loop ERROR na hoye ber hote pare.
                if(p->data == q->next->data){
                    Node* temp = q->next->next;
                    free(q->next);
                    q->next = temp;
                }
                else                             //else use na kre, only (q = q->next) dile (1->1->1->1->2) = (1->1->2) ata hoy.
                    q = q->next;                //fully duplicate delete hoy na. karon shift hoye jae tai akta duplicate theke jay.
            }
            p = p->next;
        }
    }
    return head;
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
        cout<<endl<<"_____After Popping All Duplicate Nodes______"<<endl;
        displayList(popRepeatedNodes(head));
    }
}
