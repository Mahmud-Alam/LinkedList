#include"LinkedList.h"

//__________Make Reverse Linked List__________//


Node* makeReverseList(Node* head){
    if(head!=NULL && head->next!=NULL)
        return head;
    Node* rest = makeReverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return rest;
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
        head = makeReverseList(head);
        displayList(head);
    }
}
