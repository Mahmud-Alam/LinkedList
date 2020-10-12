#include"LinkedList.h"

//_____________POP by Position____________//


Node* popByPosition(int pos, Node*head){
    int c = 0;
    Node* p = head;
    if(p->next==NULL){
        if(pos==c){
            free(p);
            return NULL;
        }
        else
            cout<<endl<<"Position was not found!"<<endl;
    }
    else if(p->next->next == NULL){
        if(pos==c){
            Node* temp = p->next;
            free(p);
            return temp;
        }
        else if(pos==1){
            free(p->next);
            return p;
        }
        else
            cout<<endl<<"Position was not found!"<<endl;
    }
    while(p->next->next!=NULL){

    }
}
