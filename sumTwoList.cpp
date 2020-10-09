#include"LinkedList.h"

//_______________Sum two List function______________//


Node* sumTwoList(Node* head1, Node* head2){

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
}
