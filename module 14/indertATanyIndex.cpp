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
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
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
            return;
        }
        node *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;


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
    //o(n)
    void Indert(int index,int data)
    {
        if(index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *newnode = CreatNewnode(data);
        newnode->nxt= a->nxt;
        newnode->prv=a;
        node *b= a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++;
    }
    //o(n)
    void DeletIndex (int index)
    {
        node *a=head;
        int cur_index=0;
        while(cur_index!=index)
        {
            a=a->nxt;
            cur_index++;
        }

        node *b=a->prv;
        node *c=a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if(index==0)
        {
            head =c;
        }
        sz--;


    }
    //o(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }

        node *a =head;
        int cur_index=0;
        while(cur_index!=sz-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=head;
        while(b!=NULL)
        {
            swap(b->nxt,b->prv);
            b=b->prv;
        }
        head =a;

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
    dl.Indert(0,100);
    dl.Traverse();
    dl.Indert(4,100);
    dl.Traverse();
    dl.DeletIndex(4);
    dl.Traverse();
    //dl.DeletIndex(0);
    //dl.Traverse();
    //dl.DeletIndex(.3);
    //dl.Traverse();
    dl.Reverse();
    dl.Traverse();
    cout<<dl.getsize()<<"\n";
    return 0;


}
