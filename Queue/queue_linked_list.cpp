#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class queue_class
{
public:
    Node *head = new Node;
    queue_class()
    {
        head->next=NULL;
    }
    void EnQueue(int data)
    {
        Node *temp;
        temp=head;
        Node *NewNode = new Node;
        NewNode->data=data;
        NewNode->next=NULL;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=NewNode;
    }
    void DeQueue()
    {
        if(head->next==NULL) cout<< "queue is empty !!!!11"<<endl;
        else
            head->next=head->next->next;
    }
    void display_queue()
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
    queue_class Q;
    Q.EnQueue(10);
    Q.EnQueue(20);
    Q.EnQueue(30);
    Q.EnQueue(40);
    cout<< "enqueue some data "<<endl;
    Q.display_queue();
    Q.DeQueue();
    Q.DeQueue();
    cout<< "After Dequeue 2 element"<<endl;
    Q.display_queue();
    return 0;
}

