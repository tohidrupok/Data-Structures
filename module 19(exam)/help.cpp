#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
    node * prv;
};
class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    int getSize()
    {
        return sz;
    }
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
    void swaps(int i,int j)
    {
        node* a=head;
        int n=0;
        while(a!=NULL)
        {
            n++;
            a=a->nxt;
        }
        if(i<1 || i>n ||j<1 || j>n)
        {
            return;
        }
        node* pos1=head;
        node* pos2=head;
        for(int k=0; k<i; k++)
        {
            pos1=pos1->nxt;
        }
        for(int k=0; k<j; k++)
        {
            pos2=pos2->nxt;
        }
        int val=pos1->data;
        pos1->data=pos2->data;
        pos2->data=val;
    }
    void deleteZero(int key)
    {
        node* nodetodelete;
        while(head!=NULL && head->data==key)
        {
            nodetodelete=head;
            head=head->nxt;
            free(nodetodelete);
            if(head!=NULL)
            {
                head->prv=NULL;
            }
        }
        node* a=head;
        if(a!=NULL)
        {
            while(a->nxt!=NULL)
            {
                if(a->nxt->data==key)
                {
                    nodetodelete=a->nxt;
                    a->nxt=a->nxt->nxt;
                }
                if(a->nxt!=NULL)
                {
                    a->nxt->prv=a;
                    free(nodetodelete);
                }
                else
                {
                    a=a->nxt;
                }
            }
        }
    }
    void deleteZeroNodes()
    {
        node *current= head;


        while (current != NULL)
        {
            if (current->data == 0)
            {
                // If the node is the head node
                if (current == head)
                {
                    head = current->nxt;
                    if (head != NULL)
                    {
                        (head)->prv = NULL;
                    }
                }
                // If the node is not the head node
                else
                {
                    current->prv->nxt = current->nxt;
                    if (current->nxt != NULL)
                    {
                        current->nxt->prv = current->prv;
                    }
                }
                // Delete the node
                node* temp = current;
                current = current->nxt;
                delete temp;
            }
            else
            {
                current = current->nxt;
            }
        }
    }
};
int main()
{
    DoublyLinkedList dl;

    dl.InsertAtHead(0);
    dl.InsertAtHead(10);
    dl.InsertAtHead(0);
    dl.InsertAtHead(5);
    dl.InsertAtHead(0);
    dl.InsertAtHead(1);
    dl.InsertAtHead(0);

    dl.Traverse();
    dl.Insert(2,100);

    dl.Traverse();

    dl.Reverse();
    dl.Traverse();

    int i,j;
    cin>>i>>j;
    dl.swaps(i,j);
    dl.Traverse();

    //dl.deleteZero(0);
    dl.deleteZeroNodes();
    dl.Traverse();
    return 0;
}
