#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:

    T data;
    node *nxt;
};
template<class T>
class LinkedList
{
public:
    node<T> *tail;
    int sz;
    LinkedList()
    {
        tail=NULL;
        sz=0;
    }
    node<T> *CreatNewnode(T value)
    {
        node<T> *Newnode =new node<T>;
        Newnode->data=value;
        Newnode->nxt = NULL;
        return Newnode;

    }
    int getsize()
    {
        return sz ;
    }
    void InsertAtTail(T value)
    {
        sz++;
        node<T> *a=CreatNewnode(value);
        if(tail==NULL)
        {
            tail=a;
            return;
        }
        a->nxt =tail;
        tail=a;

    }
    void DeletAtTail()
    {
        if(tail==NULL)
        {
            return;
        }
        sz--;
        node<T> *a=tail;
        tail= a->nxt;
        delete a;
    }
};

template<class T>
class Stack
{
public:
    LinkedList<T> dl;
    Stack()
    {

    }
    T top()
    {
        if(dl.getsize()==0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.tail->data;
    }
    void push(T val)
    {
        dl.InsertAtTail(val);
    }
    void pop()
    {
        if(dl.getsize()==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeletAtTail();
    }
};

int main()
{
    Stack<char> c;
    c.push('R');
    c.push('U');
    c.push('O');
    c.push('P');
    c.push('K');
    cout<<c.top()<<"\n";
    c.pop();
    c.pop();
    c.pop();
    c.pop();
    cout<<c.top()<<"\n";



    Stack<int> st;
    st.push(3);
    st.push(4);
    st.push(9);
    st.push(12);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}
