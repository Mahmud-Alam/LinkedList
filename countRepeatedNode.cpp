#include"LinkedList.h"

//___________Count Repeated Nodes Function__________//


int countRepeatedNode(int key, Node* head){
    int c=0;
    Node* p = head;
    while(p->next!=NULL){
        if(p->data == key)
            c++;
        p = p->next;
    }
    if(p->data == key)
        c++;
    return c;
}

void displayRepeatedNode(Node* head){
    Node* p = head;
    cout<<endl<<"___All Node's repeated numbers___"<<endl<<endl;
    while(p!=NULL){
        cout<<p->data<<" is : "<<countRepeatedNode(p->data,head)<<" times."<<endl;
        p = p->next;
    }
    cout<<endl;
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
        displayRepeatedNode(head);
    }
}
