#include"LinkedList.h"

//____________Sum all Nodes from list_____________//

int sumAllNode(Node* head){
    int sumAll = 0;
    if(head->next==NULL)
        return head->data;
    else{
        while(head->next!=NULL){
            sumAll+=head->data;
            head = head->next;
        }
        sumAll+=head->data;
    }
    return sumAll;
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
    cout<<endl<<"Total Sum of the List: "<<sumAllNode(head)<<endl;
}
