#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        next = NULL;
    }
    Node(int value){
        data = value;
        next = NULL;
    }
    ~Node();
};

//_______________Find Length of Linked List________________//


int findLength(Node* head){
    int c = 0;
    if(head==NULL)
        return c;
    else{
        while(head!=NULL){
            c++;
            head = head->next;
        }
    }
    return c;
}
Node* createLinkedList(int KEY, Node* head){
    Node* node = new Node(KEY);
    Node* p = head;
    if(head==NULL){
        head = node;
    }
    else{
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = node;
    }
    return head;
}
void displayList(Node* head){
    cout<<endl<<"The LinkedList is: ";
    while(head!=NULL){
        if(head->next!=NULL)
            cout<<head->data<<" -> ";
        else
            cout<<head->data;

        head = head->next;
    }
    cout<<endl;
}
int main(){
    int v,c;
    Node* head = NULL;
    while(1){
        cout<<endl<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newhead = createLinkedList(v,head);
            head = newhead;
            displayList(newhead);
        }
    }
    cout<<endl<<"Do you want to know the length of the Linked List?(If \"YES type 1\", If \"NO type 0\"): ";cin>>v;
    if(v==0){}
    else if(v==1){
        c = findLength(head);
        if(c==0)
            cout<<endl<<"List is empty, So the Length of the Linked List is: "<<c<<endl;
        else
            cout<<endl<<"The Length of the Linked List is: "<<c<<endl;
    }

}
