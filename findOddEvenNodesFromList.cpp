#include"LinkedList.h"

//___________Find Odd/Even Nodes from the List___________//


int findEvenNodes(Node* head){
    Node* p = head;
    int c = 0;
    while(p!=NULL){
        if(p->data%2==0)
            c++;
        p = p->next;
    }
    return c;
}
