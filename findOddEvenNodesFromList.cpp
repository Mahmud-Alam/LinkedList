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
int findLength(Node* head){
    Node* p = head;
    int c = 0;
    while(p!=NULL){
        c++;
        p = p->next;
    }
    return c;
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
    int even = findEvenNodes(head);
    int length = findLength(head);
    int odd = length - even;

    cout<<endl<<"List length: "<<length<<endl;
    cout<<endl<<"Even Nodes : "<<even<<endl;
    cout<<endl<<"Odd Nodes  : "<<odd<<endl;
}
