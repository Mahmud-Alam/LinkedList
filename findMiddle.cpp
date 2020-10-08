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
    if(head==NULL) cout<<endl<<"list is empty!"<<endl;
    else if(head->next==NULL) cout<<endl<<"List has only one Node!\nFinding Middle Node is not possible!"<<endl;
    else if(head->next->next==NULL) cout<<endl<<"List has only two Node!\nFinding Middle Node is not possible!"<<endl;
    else{
        int mid = findMiddle(head);
        cout<<endl<<"Linked List's Middle Node is: "<<mid<<endl;
    }
}
