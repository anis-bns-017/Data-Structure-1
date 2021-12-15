#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class linked_list
{
public:
    Node *head = new Node;
    linked_list()
    {
        //Node *head = new Node;
        head->next=NULL;
    }
    void PushBack(int data)
    {
        Node *temp;
        temp=head;
        Node *NewNode = new Node;
        NewNode->data=data;
        NewNode->next=NULL;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=NewNode;
    }
    void PopBack()
    {
        Node *temp;
        temp=head;
        while(temp->next->next->next!=NULL) temp=temp->next;
        temp->next->next=NULL;
    }
    void PushFront(int data)
    {
        Node *NewNode = new Node;
        NewNode->data=data;
        NewNode->next=head->next;
        head->next=NewNode;
    }
    void PopFront()
    {
        if(head->next==NULL) cout<< "linked list is empty !!!!11"<<endl;
        else
        head->next=head->next->next;
    }
    void insert_data_position(int pos,int data)
    {
        Node *temp;
        temp=head;
        Node *NewNode = new Node;
        NewNode->data=data;
        NewNode->next=NULL;
        while(temp->next!=NULL and pos>1)
        {
            temp=temp->next;
            pos--;
        }
        if(pos==1)
        {
            NewNode->next=temp->next;
            temp->next=NewNode;
        }
        else
            cout<< "Your selected position out rang of this linked list !!!!1\nplease enter correct position "<<endl;
    }
    void delete_data_position(int pos)
    {
        Node *temp;
        temp=head;
        while(temp->next!=NULL and pos>1)
        {
            temp=temp->next;
            pos--;
        }
        if(pos==1) temp->next=temp->next->next;
        else cout<< "Your selected position out rang of this linked list !!!!1\nplease enter correct position "<<endl;
    }
    void display_link_list()
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
    linked_list l;
    l.PushBack(10);
    l.PushBack(20);
    l.PushBack(30);
    cout<< "insert element push_back"<<endl;
    l.display_link_list();
    l.PushFront(1);
    l.PushFront(2);
    l.PushFront(3);
    cout<< "insert element front"<<endl;
    l.display_link_list();
    l.PopBack();
    cout<< "pop back"<<endl;
    l.display_link_list();
    l.PopFront();
    cout<< "pop front"<<endl;
    l.display_link_list();
    l.insert_data_position(2,100);
    cout<< "insert specific position (2)"<<endl;
    l.display_link_list();
    l.delete_data_position(5);
    cout<< "Delete specific position (5)"<<endl;
    l.display_link_list();
    return 0;
}

