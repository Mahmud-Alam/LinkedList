#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
void displayList(Node* head){
    Node* p = head;
    while(p!=NULL){
        cout<<p->value<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(5);
    Node* head2 = new Node(1);
    Node* head3 = new Node(2);
    head->next = head2;
    head2->next = head3;

    displayList(head);
}
