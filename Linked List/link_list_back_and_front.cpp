#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void display_link_list(Node *h)
{
    while(h!=NULL)
    {
        cout<<h->data<< " ";
        h=h->next;
    }
}
Node* Insart_right(Node *r,int d)
{
    if(r==NULL)
    {
        r=new Node;
        r->data=d;
        r->next=NULL;
        return r;
    }
    r->next=new Node;
    r=r->next;
    r->data=d;
    r->next=NULL;
    return r;
    /*
    while(r!=NULL)
    {
        r=r->next;
    }
    r=new Node;
    r->data=d;
    r->next=NULL;
    return r;*/
}
Node* Insert_left(Node *L , int d)
{
    Node *n;
    n=new Node;
    n->data=d;
    n->next=L;
    return n;
}
int main()
{
    Node *h,*head;
    h=NULL;
    h=Insart_right(h,10);
    head=h;
    h=Insart_right(h,20);
    h=Insart_right(h,30);
    h=Insart_right(h,40);
    h=Insart_right(h,50);
    head=Insert_left(head,9);
    head=Insert_left(head,8);
    head=Insert_left(head,7);
    head=Insert_left(head,6);
    display_link_list(head);
    return 0;
}

