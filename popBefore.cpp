#include<bits/stdc++.h>
#include"LinkedList.h"
using namespace std;

Node* popBeforeNode(int KEY,Node* head){
    Node* key = Node(KEY);
    Node* p = head;
    if(p==NULL){
        cout<<endl<<"Pop before node is not possible. Because List is empty!!!"<<endl;
        return NULL;
    }
    else if(p->next==NULL){
        cout<<endl<<"List has one item, So, Pop before node is not possible."<<endl;
        return NULL;
    }
    else{
        while(p->next->next!=NULL){
            if(p->next->data==key->data){
                Node* temp = p->next;
                free(p);
                return temp;
            }
            else{
                p = p->next;
            }
        }
        if(p->next->next==NULL){
            if(p->next->data==key->data){
                Node* temp = p->next;
                free(p);
                return temp;
            }
            else{
                cout<<endl<<"Key is not found!!!"<<endl;
                return NULL;
            }
        }
    }
}
int main(){

}
