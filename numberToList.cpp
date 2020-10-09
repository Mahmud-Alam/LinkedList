#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
    ~Node();
};

//____________Number to List Representation_____________//

Node* numberToList(int value, Node* head){
    Node* node = new Node(value);
    Node * p = head;
    if(p==NULL){
        p = node;
        return p;
    }
    node->next = p;
    return node;
}

void displayList(Node* head){
    cout<<endl<<"The LinkedList is: ";
    while(head!=NULL){
        if(head->next!=NULL) cout<<head->data<<" -> ";
        else cout<<head->data;
        head = head->next;
    }
    cout<<endl<<endl;
}

int main(){
    int v;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        Node* head = NULL;
        if(v==1024)
            break;
        else if(v==0) cout<<endl<<"Only Zero cannot converted into list."<<endl<<endl;
        else if(v>=2147483647){
            cout<<endl<<"Integer value cannot support this large Number! Try some small Numbers."<<endl;
            break;
        }
        else{
            while(v>0){
                int mod = v%10;
                Node* newHead = numberToList(mod,head);
                head = newHead;
                //displayList(head);
                v/=10;
            }
            cout<<endl<<"___Number converted to the Linked List___"<<endl;
            displayList(head);
        }
    }
}
