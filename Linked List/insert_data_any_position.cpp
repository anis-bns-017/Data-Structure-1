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
void insert_data_position(Node *head,int pos,int data)
{
    Node *NewNode = new Node;
    NewNode->data=data;
    NewNode->next=NULL;
    while(head->next!=NULL and pos>1)
    {
        head=head->next;
        pos--;
    }
    if(pos==1)
    {
        NewNode->next=head->next;
        head->next=NewNode;
    }
    else
        cout<< "Your selected position out rang of this linked list !!!!1\nplease enter correct position "<<endl;
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
    insert_data_position(head,1,100);
    insert_data_position(head,3,300);
    insert_data_position(head,6,600);
    //insert_data_position(head,10,1000);
    display_link_list(head);
    return 0;
}

