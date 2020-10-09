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

int main(){
    int v;
    Node* head = NULL;
    while(1){
        cout<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
             int mod = v%10;
                cout<<endl<<mod<<endl;
        }
    }
}
