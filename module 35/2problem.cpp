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
    void print()
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
    void Merge(DoublyLinkedList a)
    {
        if (tail != NULL)
        {
            tail->nxt = a.head;
            if (a.head != NULL)
            {
                a.head->prv = tail;
            }
            tail = a.tail;
        }
        else
        {
            head = a.head;
            tail = a.tail;
        }
        a.head = NULL;
        a.tail = NULL;
    }

};

int main()
{
    DoublyLinkedList a;
    DoublyLinkedList b;
    a.InsertAtHead(1);
    a.InsertTail(5);
    a.InsertMid(3);
    a.InsertAtHead(0);
    a.InsertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.InsertAtHead(10);
    b.InsertTail(50);
    b.InsertMid(30);
    b.InsertAtHead(9);
    b.InsertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.Merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100
    return 0;
}
