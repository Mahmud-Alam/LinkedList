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


//_______________POP After Function________________//


Node* popAfter(int KEY, Node* head){
    Node* key = new Node(KEY);
    Node* p =head;
    if(p->next==NULL){
        if(p->data==key->data)
            cout<<endl<<"Key is found! \nBut the List has one Node. So, POP After is not possible!\n\nThe ";
        else
            cout<<endl<<"Key is not found! \nAnd also the List has one Node. So, POP After is not possible!\n\nThe ";
        return head;
    }
    else if(p->next->next==NULL){
        if(p->data==key->data){
            cout<<endl<<"Key is found!";
            cout<<endl<<"After popping the Node, the new ";
            p->next = NULL;
            return p;
        }
        else if(p->next->data==key->data){
            cout<<endl<<"Key is found in last node! So, pop after node is not possible.\n\nThe ";
            return p;
        }
        else{
            cout<<endl<<"Key is not found!\n\nThe ";
            return head;
        }
    }
    else{
        while(p->next->next!=NULL){
            if(p->data==key->data){
                cout<<endl<<"Key is found!";
                cout<<endl<<"After popping the Node, the new ";
                Node* t = p->next->next;
                free(p->next);
                p->next = t;
                return head;
            }
            else if(p->next->data==key->data){
                cout<<endl<<"Key is found!";
                cout<<endl<<"After popping the Node, the new ";
                Node* t = p->next->next->next;
                free(p->next->next);
                p->next->next = t;
                return head;
            }
            else if(p->next->next->next==NULL){
                if(p->next->next->data==key->data){
                    cout<<endl<<"Key is found in last node! So, pop after node is not possible.\n\nThe ";
                    return head;
                }
                else{
                    cout<<endl<<"Key is not found!\n\nThe ";
                    return head;
                }
            }
            else{
                p = p->next;
            }
        }
    }
    return head;
}

Node* createLinkedList(int value, Node* head){
    Node* newNode = new Node(value);
    Node* p = head;
    if(head==NULL){
        head = newNode;
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
        if(p->next!=NULL){
            cout<<p->data<<" -> ";
        }
        else{
            cout<<p->data;
        }
        p = p->next;
    }
    cout<<endl;
}

void displayAfterPopList(Node* head){
    Node* p = head;
    cout<<"LinkedList is: ";
    while(p!=NULL){
        if(p->next!=NULL){
            cout<<p->data<<" -> ";
        }
        else{
            cout<<p->data;
        }
        p = p->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    int v,key;
    cout<<" ________________________________"<<endl;
    cout<<"|                                |"<<endl;
    cout<<"|        POP After Function      |"<<endl;
    cout<<"|________________________________|"<<endl;
    while(1){
        cout<<endl<<"Input a value(1024 to stop) : ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newNode = createLinkedList(v,head);
            head = newNode;
            displayList(head);
        }
    }
    if(head==NULL)
        cout<<endl<<"List is empty, So POP is not possible!"<<endl;
    else{
        while(1){
            cout<<endl<<"Do you want to pop a node, after any key?(If \"YES type 1\", If \"No type 0\"): ";cin>>v;
            if(v==0)
                break;
            else if(v==1){
                cout<<endl<<"Input a key: ";cin>>key;
                    Node* newHead = popAfter(key,head);
                    displayAfterPopList(head);
            }
            else{
                cout<<endl<<"Wrong keyword! Type again."<<endl;
            }
        }
    }
}
