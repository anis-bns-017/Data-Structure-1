#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insert_data(Node *head,int data)
{
    Node *NewNode = new Node;
    NewNode->data=data;
    NewNode->next=NULL;
    while(head->next!=NULL) head=head->next;
    head->next=NewNode;
}
void display_link_list(Node *head)
{
    while(head->next!=NULL)
    {
        cout<< head->next->data<< " ";
        head=head->next;
    }
}
int main()
{
    Node *head = new Node;
    head->next=NULL;
    insert_data(head,10);
    insert_data(head,20);
    insert_data(head,30);
    insert_data(head,40);
    display_link_list(head);
    return 0;
}
