#include"LinkedList.h"

//_______________Get Nth Node by index number_______________//


int getNthNode(int index, Node* head){
    Node* p = head;
    int c=0;
    if(p->next==NULL){
        if(index == c)
            return p->data;
        else return -1;
    }
    else{
        while(p->next!=NULL){
            if(c == index)
                return p->data;
            c++;
            p = p->next;
        }
        if(c == index)
        return p->data;
    }
    return -1;
}

int main(){
    int v,index;
    Node* head = NULL;
    while(1){
        cout<<endl<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newhead = createLinkedList(v,head);
            head = newhead;
            displayList(head);
        }
    }
    if(head==NULL)
        cout<<endl<<"list is empty!"<<endl;
    else{
        cout<<endl<<"Do you want to get any Node by its Index Number?(If \"YES type 1\", If \"NO type 0\"): ";cin>>v;
        while(1){
            if(v==0)
                break;
            else if(v==1){
                cout<<endl<<"Input any Index Number: ";cin>>index;
                int nthNode = getNthNode(index,head);
                if(nthNode==-1){
                    cout<<endl<<"This Index is not exist! Try another Index number."<<endl;
                    displayList(head);
                }
                else{
                    cout<<endl<<"Index ["<<index<<"] = "<<nthNode<<endl;
                    displayList(head);
                }
            }
            else
                cout<<endl<<"Wrong keyword! Type again."<<endl;

            cout<<endl<<"Do you want to get any Node by its Index Number again?(If \"YES type 1\", If \"NO type 0\"): ";cin>>v;
        }
    }
}
