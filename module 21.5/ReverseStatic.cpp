#include<bits/stdc++.h>
using namespace std;
template < class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};
template < class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz=0;
    }
    //o(1)
    node<T>  *CreatNewnode( T data)
    {
        node<T>  *newnode = new  node<T> ;
        newnode->data=data;
        newnode->nxt= NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //o(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreatNewnode(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node<T> *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;


    }
    //o(1)
    int getsize()
    {
        return sz;
    }
    void deletTheHead()
    {
        if(getsize()==0)
            return;
        node<T>  *a=head;
        node<T>  *b=a->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv=NULL;
        }
        head=b;
        sz--;

    }
    void Traverse()
    {
        node<T> *a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
};
template < class T>
class Stack
{
public:
    DoublyLinkedList<T>  dl;
    Stack()
    {

    }
    void push(T val)
    {
        dl.InsertAtHead(val);

    }
    void pop()
    {
        if(dl.getsize()==0)
            return;
        dl.deletTheHead();
    }
    T top()
    {
        if(dl.getsize()==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
    int getsize()
    {
        return dl.getsize();
    }
    void printf()
    {
        dl.Traverse();
    }

};
int main()
{
    Stack<int>a;
    a.push(20);
    a.push(40);
    a.push(60);
    a.push(80);
    a.push(85);
    cout<<"The List is->";
    a.printf();
    Stack<int>temp;
    while(a.getsize()>0)
    {
        temp.push(a.top());
        a.pop();
    }
    swap(a,temp);
    cout<<"final List is->";
    a.printf();


    return 0;
}
