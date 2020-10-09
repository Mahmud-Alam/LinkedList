#include"LinkedList.h"

int listToNumber(Node* head){
    int totalValue = 0;
    if(head->next==NULL)
        return head->data;
    else{
        totalValue = head->data;
        while(head->next!=NULL){
            int nextValueLength=0, nextValue = head->next->data;
            while(nextValue>0){
                nextValue/=10;
                nextValueLength++;
            }
            int preValue = totalValue*pow(10,nextValueLength);
            totalValue = preValue + head->next->data;

            head = head->next;
        }
    }
    return totalValue;
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
        int number = listToNumber(head);
        cout<<endl<<"___Linked list to Number is done___";
        cout<<endl<<"The Number is: "<<number<<endl;
    }
}
