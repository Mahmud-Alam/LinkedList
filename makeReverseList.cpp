#include"LinkedList.h"

//__________Make Reverse Linked List__________//


Node* makeReverseList(Node* head){
    Node* p = head;
    Node* prev = NULL, *next = NULL;
    while(p!=NULL){
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    head = prev;
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
        Node* newHead = makeReverseList(head);
        cout<<endl<<endl<<"_____After Reverse_____"<<endl;
        displayList(newHead);
    }
}
