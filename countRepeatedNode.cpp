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

Node* popRepeatedNodes(Node* head){
    Node* p = head;
    if(p->next==NULL)
        return head;
    else{
        while(p!=NULL && p->next!=NULL){
            Node* q = p;
            while(q->next!=NULL){
                if(p->data==q->next->data){
                    Node* temp = q->next->next;
                    free(q->next);
                    q->next = temp;
                }
                else
                    q = q->next;
            }
            p = p->next;
        }
    }
    return head;
}

void displayRepeatedNode(Node* head1, Node* head2){
    Node* p = head1;
    Node* spareHead = popRepeatedNodes(head2);
    Node* q = spareHead;
    cout<<endl<<endl<<"___All Node's repeated numbers___"<<endl<<endl;

    while(q!=NULL){
        cout<<q->data<<" have : "<<countRepeatedNode(q->data,head1)<<" times."<<endl;
        q = q->next;
    }
    cout<<endl;
}

int main(){
    int v,pos;
    Node* head1 = NULL;
    Node* head2 = NULL;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead1 = createLinkedList(v,head1);
            Node* newHead2 = createLinkedList(v,head2);
            head1 = newHead1;
            head2 = newHead2;
            displayList(head1);
        }
    }
    if(head1 == NULL)
        cout<<endl<<"List is empty!"<<endl;
    else{
        displayRepeatedNode(head1,head2);
    }
}
