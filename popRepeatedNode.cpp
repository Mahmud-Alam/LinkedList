#include"LinkedList.h"

//____________Pop Repeated Nodes_____________//

Node* popRepeatedNodes(Node* head){
    Node* p = head;
    if(p->next==NULL)
        return head;
    else if(p->next->next==NULL){
        if(p->data==p->next->data){
            free(p->next);
            p->next = NULL;
        }
        return head;
    }
    else{
        while(p->next->next!=NULL){
            int key = p->data;
            Node* q = p->next;
            while(q->next!=NULL){
                if(q->data == key){
                    Node* temp = q->next;
                    free(q);
                    p->next = temp;
                }
                q = q->next;
            }
        }
    }
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

    }
}
