#include"LinkedList.h"

//_______________Sum two List function______________//


Node* sumTwoList(Node* head1, Node* head2){
    Node* p = head1;
    Node* q = head2;
    if(p==NULL&&q==NULL){
        return NULL;
    }
    else if(p==NULL||q==NULL){
        if(p==NULL)
            return q;
        else return p;
    }
    else if(p->next==NULL&&q->next==NULL){
        Node* node = NULL;
        int sum = p->data + q->data;
        int mod = sum%10;
        sum/=10;
        Node* newNode = createLinkedList(sum,node);
        createLinkedList(mod,newNode);

        return newNode;
    }
}

int main(){
    int v;
    Node* head1 = NULL;
    Node* head2 = NULL;
    cout<<"_________<<1st list>>_________"<<endl<<endl;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead = createLinkedList(v,head1);
            head1 = newHead;
            displayList(head1);
        }
    }
    cout<<endl<<"_________<<2nd list>>_________"<<endl<<endl;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead = createLinkedList(v,head2);
            head2 = newHead;
            displayList(head2);
        }
    }

    cout<<endl<<"Summation of two Linked List is done!"<<endl;
    displayList(sumTwoList(head1,head2));
}
