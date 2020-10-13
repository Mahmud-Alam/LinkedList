#include"LinkedList.h"

//__________Replaced Last Node to First Node Function__________//


Node* replacedLastNodeToFirstNode(Node* head){
    Node* p = head;
    if(p->next==NULL)
        return head;
    else{
        while(p->next->next!=NULL){
            p = p->next;
        }
        Node* temp  = p->next;
        p->next = NULL;
        temp->next = head;
        return temp;
    }
}
int main(){
    int v;
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
        Node* newHead = replacedLastNodeToFirstNode(head);
        displayList(newHead);
    }
}

