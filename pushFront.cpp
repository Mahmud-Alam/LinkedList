#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
    ~Node();
};

void displayList(Node* p)
{
    while(p!=NULL)
    {
        if(p->next!=NULL)
        {
            cout<<p->data<<" -> ";

        }
        else
        {
            cout<<p->data;

        }
        p=p->next;
    }
    cout<<endl;
}

//_______Push front function____________

void pushFront(int value, Node* head)
{
    Node* p = new Node(value);
    p->next = head;

    displayList(p);
}

int main()
{
    Node* head = new Node(1);
    Node* head2 = new Node(2);
    Node* head3 = new Node(3);
    head->next = head2;
    head2->next = head3;

    displayList(head);

    int value;
    cin>>value;
    pushFront(value,head);
}
