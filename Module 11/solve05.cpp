#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};


class Linkedlist
{
public:
    node *head;
    Linkedlist()
    {
        head=NULL;
    }
    //Creates a new node with data = value and nxt=NULL
    node *CreateNewNode(int value)
    {
        node *Newnode = new node;
        Newnode->data= value;
        Newnode->nxt=NULL;
        return Newnode;
    }
    //Insert at Head
    void InsertAthead(int value)
    {
        node *a = CreateNewNode(value);
        if(head==NULL)
        {
            head =a;
            return;
        }
        //If head is not NULL
        a->nxt=head;
        head= a;
    }
    //Print the LinkedList
    void Traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a= a->nxt;
        }
        cout<<"\n";
    }

    int getSize()
    {
        int counter=0;
        node *current =head;
        while(current!=NULL)
        {
            counter++;
            current = current->nxt;

        }
        return counter;


    }
    int getValue(int value)
    {
        node *a=head;
        int index=0;
        while(a!=NULL)
        {
            if(index==value)
            {
                return a->data;
            }
            a=a->nxt;
            index++;
        }
        return -1;
    }
    void swapFirst()
    {
        node* temp=head;
        swap(temp->data,temp->nxt->data);
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


};



int main()
{
    Linkedlist l;
    cout<<l.getSize()<<"\n";

    l.InsertAthead(5);
    cout<<l.getSize()<<"\n";

    l.InsertAthead(6);
    l.InsertAthead(30);
    cout<<l.getSize()<<"\n";

    l.InsertAthead(20);
    l.InsertAthead(30);
    cout<<l.getValue(2)<<"\n";
    cout<<l.getValue(6)<<"\n";
    l.printReverse();
    l.Traverse();

    l.swapFirst();
    l.Traverse();
    l.printReverse();



    return 0;
}
