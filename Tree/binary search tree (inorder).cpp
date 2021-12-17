#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
class binary_search_tree
{
public:
    Node *root = new Node;
    Node *temp;
    binary_search_tree()
    {
        temp=root;
        root->data=NULL;
        root->right=NULL;
        root->left=NULL;
    }
    void insert_node(Node *temp , int data)
    {
        if(data>temp->data and temp->right==NULL)
        {
            Node *NewNode = new Node;
            temp->right=NewNode;
            NewNode->data=data;
            NewNode->left=NULL;
            NewNode->right=NULL;
        }
        else if(data<temp->data and temp->left==NULL)
        {
            Node *NewNode = new Node;
            temp->left=NewNode;
            NewNode->data=data;
            NewNode->left=NULL;
            NewNode->right=NULL;
        }
        else
        {
            if(data>temp->data)
            {
                temp=temp->right;
                insert_node(temp,data);
            }
            else
            {
                temp=temp->left;
                insert_node(temp,data);
            }
        }
    }
    void insert_data(int data)
    {
        if(temp->data==NULL)
        {
            temp->data=data;
        }
        else
        {
            insert_node(temp,data);
        }
        temp=root;
    }
    Node* display_inorder(Node *temp)
    {
        if(temp->left!=NULL) display_inorder(temp->left);
        if(temp->left==NULL)
        {
            cout<< temp->data<< " ";
            if(temp->right!=NULL) display_inorder(temp->right);
            return NULL;
        }
        cout<< temp->data<< " ";
        if(temp->right!=NULL) display_inorder(temp->right);
        return NULL;
    }
    void call_display_inorder()
    {
        display_inorder(root);
    }

};
int main()
{
    binary_search_tree bst;
    int total_tree_node;
    cout<< "Enter total size of tree element :";
    cin>>total_tree_node;
    int arr[total_tree_node];
    cout<< "Enter all element with space :";
    for(int i=0;i<total_tree_node;i++) cin>>arr[i];
    for(auto i:arr) bst.insert_data(i);
    /*
    bst.insert_data(11);
    bst.insert_data(6);
    bst.insert_data(8);
    bst.insert_data(19);
    bst.insert_data(4);
    bst.insert_data(10);
    bst.insert_data(5);
    bst.insert_data(17);
    bst.insert_data(43);
    bst.insert_data(49);
    bst.insert_data(31);
    */
    cout<<"Display inorder"<<endl;
    bst.call_display_inorder();
    return 0;
}
