#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node
{
public:
    int value;
    node* nxt;
    node(int value)
    {
        this->value=value;
        this->nxt=NULL;
    }
};
class LinkedList
{
public:
    node* head=NULL;
    void InsertAtHead(int value)
    {
        node* newnode=new node(value);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->nxt=head;
        head=newnode;
    }
    int getSize()
    {
        int counter=0;
        node* current=head;
        while(current!=NULL)
        {
            counter++;
            current=current->nxt;
        }
        return counter;
    }
    int getValue(int value)
    {
        node* a=head;
        int index=0;
        while(a!=NULL)
        {
            if(index==value)
            {
                return a->value;
            }
            a=a->nxt;
            index++;
        }
        return -1;
    }
    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout<<a->value<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    void printReverse()
    {
        node* temp=NULL;
        node* prev=NULL;
        node* current=head;
        while(current != NULL)
        {
            temp = current->nxt;
            current->nxt = prev;
            prev = current;
            current = temp;
            cout<<current<<" ";
        }
        head=prev;
        cout<<"\n";
    }
    void swapFirst()
    {
        node* temp=head;
        swap(temp->value,temp->nxt->value);
    }
};
int main()
{
    LinkedList l;

    cout<<l.getSize()<<"\n";

    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";

    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";

    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();
    return 0;
}
