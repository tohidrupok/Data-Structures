#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
    node *prv;
};
class DoublyLinkedList
{
public:
    node *head;
    node *tail;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    //o(1)
    node *CreatNewnode(int data)
    {
        node *newnode = new node;
        newnode->data=data;
        newnode->nxt= NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //o(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreatNewnode(data);
        if(head==NULL)
        {
            head=newnode;
            tail= newnode;
            return;
        }
        node *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;



    }
    //o(1)
    void InsertTail(int data)
    {
        sz++;
        node *newnode = CreatNewnode(data);
        if(tail==NULL)
        {
            head=newnode;
            tail= newnode;
            return;
        }
        node *a=tail;
        a->nxt=newnode;
        newnode->prv=a;
        tail=newnode;


    }
    //o(n)
    void InsertMid(int data)
    {

        if(sz==0)
        {
            InsertAtHead(data);
        }
        else
        {
            node *newnode = CreatNewnode(data);
            int mid=sz/2;

            node *a=head;
            for (int i = 1; i < mid; i++)
            a = a->nxt;

            newnode->prv=a;
            newnode->nxt=a->nxt;
            a->nxt->prv=newnode;
            a->nxt=newnode;

        }
        sz++;

    }
    //o(n)
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
    //o(1)
    int getsize()
    {
        return sz;
    }


};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(8);
    dl.InsertAtHead(7);
    dl.InsertAtHead(5);
    dl.InsertAtHead(2);
    dl.Traverse();
    dl.InsertTail(10);
    dl.Traverse();
    dl.InsertMid(9);
    dl.Traverse();
    return 0;


}
