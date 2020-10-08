#include"LinkedList.h"

//______________Find Middle Node Function_______________//


int findMiddle(Node* head){
    Node* p = head;
    int c=0,mid=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    if(c%2==0) mid = c/2;
    else mid = (c/2)+1;
    p = head;
    c=0;
    while(p!=NULL){
            c++;
        if(c==mid)
            return p->data;
        p = p->next;
    }
}
