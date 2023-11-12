#include<bits/stdc++.h>
using namespace std;
class node
{
public:

    int data;
    node *nxt;
};
class LinkedList
{
public:
    node *head;
    int sz;
    LinkedList()
    {
        head=NULL;
        sz=0;
    }
    node *CreatNewnode(int value)
    {
        node *Newnode =new node;
        Newnode->data=value;
        Newnode->nxt = NULL;
        return Newnode;

    }
    int getsize()
    {
        return sz ;
    }

    void InsertAthead(int value)
    {
        sz++;
        node *a=CreatNewnode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->nxt =head;
        head=a;

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
    int SerchDistinctValuse(int value)
    {
        node *a= head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a=a->nxt;
            index++;
        }
        return -1;

    }
    void InserAtAnyIndex(int index,int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }

        if(index==0)
        {
            InsertAthead(value);
            return;
        }
        sz++;
        node *a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *newnode =CreatNewnode(value);
        newnode->nxt=a->nxt;
        a->nxt=newnode;
    }
    void DeletAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        sz--;
        node *a=head;
        head= a->nxt;
        delete a;
    }
    void DeletAnyIndex(int index)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            DeletAtHead();
            return;
        }
        sz--;
        node *a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=a->nxt;
        a->nxt=b->nxt;
        delete b;
    }
    void InsertAfterValue(int value,int data)
    {
        node *a=head;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                break;
            }
            a=a->nxt;
        }
        if(a==NULL)
        {
            cout<<value<<" doesn't exist in Linked-list";
        }
        sz++;
         node *newnode=CreatNewnode(data);
         newnode->nxt=a->nxt;
         a->nxt=newnode;
    }
    void ReversePrint2(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        ReversePrint2(a->nxt);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
      ReversePrint2(head);
      cout<<"\n";
    }


};
int main()
{
    LinkedList l;
    cout<<"Current size of this class:"<<l.getsize()<<"\n";
    l.InsertAthead(30);
    l.Traverse();
    l.InsertAthead(60);
    l.Traverse();
    l.InsertAthead(30);
    l.Traverse();
    l.InsertAthead(90);
    l.Traverse();
    l.InsertAthead(130);
    l.Traverse();
    cout<<"60 position in this class index of:"<<l.SerchDistinctValuse(60)<<"\n";

    cout<<"Current size of this class:"<<l.getsize()<<"\n";
    l.InserAtAnyIndex(0,20);
    l.Traverse();
    l.InserAtAnyIndex(3,100);
    l.Traverse();
    l.InserAtAnyIndex(6,400);
    l.Traverse();
    cout<<"Current size of this class:"<<l.getsize()<<"\n";
    l.DeletAtHead();
    l.Traverse();
    cout<<"Current size of this class:"<<l.getsize()<<"\n";

    l.DeletAnyIndex(3);
    l.Traverse();
    cout<<"Current size of this class:"<<l.getsize()<<"\n";
    l.InsertAfterValue(100,150);
    l.Traverse();
    cout<<"Current size of this class:"<<l.getsize()<<"\n";
    l.ReversePrint();
    return 0;
}

