#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class stack_class
{
public:
    Node *head = new Node;
    stack_class()
    {
        head->next=NULL;
    }
    void Push(int data)
    {
        Node *temp;
        temp=head;
        Node *NewNode = new Node;
        NewNode->data=data;
        NewNode->next=NULL;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=NewNode;
    }
    void Pop()
    {
        Node *temp;
        temp=head;
        while(temp->next->next->next!=NULL) temp=temp->next;
        temp->next->next=NULL;
    }
    void display_stack()
    {
        Node *temp;
        temp=head;
        while(temp->next!=NULL)
        {
            cout<< temp->next->data<< " ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main()
{
    stack_class s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    cout<< "push some data"<<endl;
    s.display_stack();
    s.Pop();
    s.Pop();
    cout<< "After pop some data"<<endl;
    s.display_stack();
    return 0;
}


