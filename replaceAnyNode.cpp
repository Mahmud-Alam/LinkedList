#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next =NULL;
    }
    ~Node();
};

int replaceAnyNode(int value, int key, Node* head){
    int flag = 0;
    Node* p = head;
    while(p->next!=NULL){
        if(p->data==key){
            p->data = value;
            flag = 1;
        }
        p = p->next;
    }
    if(p->data==key){
        p->data = value;
        flag = 1;
    }
    return flag;
}

Node* createLinkedList(int value, Node* head){
    Node* newNode = new Node(value);
    Node* p = head;
    if(p == NULL){
        p = newNode;
        return p;
    }
    else{
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = newNode;
    }
    return head;
}

void displayList(Node* head){
    Node* p = head;
    cout<<endl<<"The LinkedList is: ";
    while(p!=NULL){
        if(p->next!=NULL) cout<<p->data<<" -> ";
        else cout<<p->data;
        p = p->next;
    }
    cout<<endl<<endl;
}
int main(){
    Node* head = NULL;
    int v;
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
    if(head == NULL) cout<<endl<<"List is empty!"<<endl;
    else{
        cout<<endl<<"Do you want to replace any Node value?(If yes type 1, If no type 0): ";cin>>v;
        while(1){
            if(v==0) break;
            else if(v==1){
                int key,value,flag;
                cout<<endl<<"Input a key, which you want to replace: ";cin>>key;
                cout<<endl<<"Input a value, which you want to set  : ";cin>>value;
                flag = replaceAnyNode(value,key,head);
                if(flag==1){
                    cout<<endl<<"_____After replace_____"<<endl;
                    displayList(head);
                }
                else cout<<endl<<"Key is not found in the list! Try another key."<<endl;
            }
            else cout<<endl<<"Wrong Keyword! Type again."<<endl;
            cout<<endl<<"Do you want to replace any Node value Again?(If yes type 1, If no type 0): ";cin>>v;
        }
    }
}
