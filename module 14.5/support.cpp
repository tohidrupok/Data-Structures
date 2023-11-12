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
    node *top;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz =0;
    }

    node *CreateNewnode(int data)
    {
        node *Newnode = new node;
        Newnode->data=data;
        Newnode->nxt=NULL;
        Newnode->prv=NULL;
        return Newnode;
    }
    void InsertAThead(int data)
    {
        sz++;
        node *nwNode = CreateNewnode(data);
        if(head==NULL)
        {
            head=nwNode;
            top=nwNode;


            return;
        }


        top->nxt = nwNode;
        nwNode->prv = top;
        top = nwNode;

    }
    void Deletlastelement ()
    {
        node* delNode = top;
        if(top == head)
        {
            head = top = NULL;
        }
        else
        {
            top = delNode->prv;
            top->nxt = NULL;
        }
        delete delNode;
        sz--;
    }
    void Travase ()
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

    void search_ith(int data)
    {
        if(data<0 || data>=sz)
        {
            cout<<"error.tohid_rupok\n";
            return;
        }
        node *a=head;
        int index=0;
        while(a!=NULL)
        {
            if(data==index)
            {
                cout<< a->data<<" \n";
                return;
            }
            a=a->nxt;
            index++;
        }
    }

    void search_element(int data)
    {

        node *a=head;

        while(a!=NULL)
        {
            if(data==a->data)
            {
                cout<< "YES \n";
                return;
            }
            a=a->nxt;

        }
        cout<<"NO\n";

    }

    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }


        node *a =head;
        int Cur_index=0;
        while(Cur_index!=sz-1)
        {
            a=a->nxt;
            Cur_index++;
        }
        node *b=head;
        while(b!=NULL)
        {
            swap(b->nxt,b->prv);
            b=b->prv;
        }
        head=a;
    }
    void InsertAnyIndex(int index,int data)
    {
        if(index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAThead(data);
            return;
        }
        node *a=head;
        int Cur_index=0;
        while(Cur_index!=index-1)
        {
            a=a->nxt;
            Cur_index++;

        }
        node *newnode= CreateNewnode(data);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node *b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++;

    }

    void Delet_element(int data)
    {
        if(head==NULL)
        {
            return;
        }
        node *a=head;

        while(a->data!=data)
        {
            a=a->nxt;

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

        sz--;


    }



};


int main()
{
    DoublyLinkedList dl;
    dl.InsertAThead(40);
    dl.InsertAThead(30);
    dl.InsertAThead(20);
    dl.InsertAThead(10);

    dl.Travase();
    dl.Deletlastelement();
    dl.Travase();
    cout<<"In this moment size is: "<<dl.getsize()<<"\n";

    dl.Deletlastelement();
    dl.Travase();
    cout<<dl.getsize()<<"\n";

    dl.Deletlastelement();
    dl.Travase();
    cout<<dl.getsize()<<"\n";


    dl.Deletlastelement();
    dl.Travase();
    cout<<dl.getsize()<<"\n";

    dl.Deletlastelement();
    dl.Travase();
    cout<<dl.getsize()<<"\n";

    dl.Deletlastelement();
    dl.Travase();
    cout<<dl.getsize()<<"\n";

    dl.Deletlastelement();
    dl.Travase();
    cout<<dl.getsize()<<"\n";

    return 0;
}
