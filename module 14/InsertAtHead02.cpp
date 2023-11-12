#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
    node *prv;
};
class DoublyLinkedList{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz=0;
    }
    node *CreatNewnode(int data)
    {
        node *newnode = new node;
        newnode->data=data;
        newnode->nxt= NULL;
        newnode->prv=NULL;
        return newnode;
    }
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreatNewnode(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;


    }
    void Traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    int getsize()
    {
        return sz;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(30);
    dl.InsertAtHead(50);
    dl.InsertAtHead(6);
    dl.Traverse();
    cout<<dl.getsize()<<"\n";
    return 0;


}
