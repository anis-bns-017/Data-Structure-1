#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
class doubly_linked_list
{
public:
    Node *head = new Node;
    Node *tail;
    Node *temp;
    doubly_linked_list()
    {
        head->prev=NULL;
        head->next=NULL;
    }
    void PushBack(int data)
    {
        temp=head;
        Node *NewNode = new Node;
        NewNode->data=data;
        NewNode->next=NULL;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=NewNode;
        NewNode->prev=temp;
        tail=NewNode;
    }
    void PopBack()
    {
        if(head->next==NULL)
            cout<< "Linked list is empty !!!"<<endl;
        else
        {
            tail=tail->prev;
            tail->next=NULL;
        }
    }
    void PushFront(int data)
    {
        Node *NewNode = new Node;
        NewNode->data=data;
        head->next->prev=NewNode;
        NewNode->next=head->next;
        head->next=NewNode;
        NewNode->prev=head;
    }
    void PopFront()
    {
        if(head->next==NULL)
            cout<< "Linked list empty !!!"<<endl;
        else
        {
            head->next=head->next->next;
            head->next->prev=head;
        }
    }
    void insert_specif_position(int pos,int data)
    {
        temp = head;
        Node *NewNode = new Node;
        NewNode->data=data;
        while(temp->next!=NULL and pos>1)
        {
            temp=temp->next;
            pos--;
        }
        if(pos==1)
        {
            if(temp->next==NULL) PushBack(data);
            else
            {
                NewNode->next=temp->next;
                NewNode->next->prev=NewNode;
                NewNode->prev=temp;
                temp->next=NewNode;
            }
        }
        else
            cout<< "Your selected position is out side of this linked list !"<<endl;
    }
    void delete_specif_position(int pos)
    {
        temp = head;
        while(temp->next!=NULL and pos>1)
        {
            temp=temp->next;
            pos--;
        }
        if(pos==1)
        {
            temp->next->next->prev=temp;
            temp->next=temp->next->next;
        }
        else
            cout<< "Your selected position is out side of this linked list !"<<endl;
    }
    void display_left_to_right()
    {
        temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->next->data<< " ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void display_right_to_left()
    {
        temp=tail;
        while(temp->prev!=NULL)
        {
            cout<<temp->data<< " ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};
int main()
{
    doubly_linked_list dl;
    dl.PushBack(10);
    dl.PushBack(20);
    dl.PushBack(30);
    dl.PushBack(40);
    dl.PushBack(50);
    cout<< "After Push_back 5 element "<<endl;
    dl.display_left_to_right();
    cout<< "print left to right"<<endl;
    dl.display_right_to_left();
    cout<< "push_front some element "<<endl;
    dl.PushFront(1);
    dl.PushFront(2);
    dl.PushFront(3);
    dl.display_left_to_right();
    dl.insert_specif_position(2,200);
    cout<< "Insert 2 position 200 "<<endl;
    dl.display_left_to_right();
    cout<< "pop_Back 1 element "<<endl;
    dl.PopBack();
    dl.display_left_to_right();
    dl.PopFront();
    cout<< "Pop_front 1 element"<<endl;
    dl.display_left_to_right();
    cout<< "Delete 2 position "<<endl;
    dl.delete_specif_position(2);
    dl.display_left_to_right();
    cout<< "Insert data in (7) position"<<endl;///7 position is absent in linked list . so it become push_back
    dl.insert_specif_position(7,100);
    dl.display_left_to_right();
    cout<< "Display right to left "<<endl;
    dl.display_right_to_left();
    return 0;
}
