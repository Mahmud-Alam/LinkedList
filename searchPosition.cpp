#include<bits/stdc++.h>
#include"LinkedList.h"
using namespace std;

//______________Search Node Position Function____________//



int searchPosition(int key, Node* head){
    int c=1;
    while(head!=NULL){
        if(head->data==key){
            break;
        }
        else{
            head = head->next;
            c++;
        }
    }
    return c;
}


//__________________Search Node Function________________//


bool searchNode(int KEY, Node* head){
    Node* key = new Node(KEY);
    while(head->next!=NULL){
        if(head->data == key->data)
            return true;
        else
            head = head->next;
    }
    if(head->data==key->data)
        return true;
    else
        return false;
}

int main(){
    int v,key;
    Node* head = NULL;
    while(1){
        cout<<endl<<"Input a value(1024 to stop): ";cin>>v;
        if(v==1024)
            break;
        else{
            Node* newHead = createLinkedList(v,head);
            head = newHead;
            displayList(head);
        }
    }
    while(1){
        if(head==NULL){
            cout<<endl<<"List is empty!"<<endl;
            break;
        }
        else{
            cout<<endl<<"Do you want to \"Search\" any node?(If \"YES type 1\", If \"NO type 0\"): ";cin>>v;
            if(v==0)
                break;
            else if(v==1){
                cout<<endl<<"Input a Key: ";cin>>key;
                bool val = searchNode(key,head);
                if(val==true){
                    cout<<endl<<"Key is found!";
                    int pos = searchPosition(key, head);
                    cout<<endl<<"Key's Position is: "<<pos<<endl;
                    displayList(head);
                }
                else{
                    cout<<endl<<"Key is not found!"<<endl;
                    displayList(head);
                }
            }
            else
                cout<<endl<<"Wrong keyword! Type again."<<endl;
        }
    }
}
