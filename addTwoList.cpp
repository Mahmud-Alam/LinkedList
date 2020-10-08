#include"LinkedList.h"

//__________________ADD two Linked List Function_______________//


Node* addTwoList(Node* head, Node* head2){
    Node* p = head;
    if(p==NULL)
        head = head2;
    else{
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = head2;
    }
    return head;
}
int main(){
    int v;
    Node* head = NULL, *head2 = NULL;
    cout<<"___Take values for the 1st list___"<<endl;
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
    cout<<endl<<"___Take values for the 2nd list___ "<<endl;
    while(1){
        cout<<endl<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead = createLinkedList(v,head2);
            head2 = newHead;
            displayList(head2);
        }
    }

    cout<<endl<<"Two Linked Lists are added!";
    Node* addedList = addTwoList(head,head2);
    displayList(addedList);
}
