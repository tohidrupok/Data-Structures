//ayta sudu stack hba,not templet based
#include<bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};
template <class T>
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
    node<T> *CreatNewnode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data=data;
        newnode->nxt= NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //o(1)
    void InsertAtHead(int data)
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
        node<T> *a=head;
        node<T> *b=a->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv=NULL;
        }
        head=b;
        sz--;

    }
};
template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {

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


};

int main()
{
    Stack< int > st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    Stack <char>ch;
    ch.push('T');
    ch.push('D');
    ch.push('h');
    cout<<ch.top()<<'\n';
    ch.pop();
    cout<<ch.top()<<'\n';
    ch.pop();
    cout<<ch.top()<<'\n';
    ch.pop();
    cout<<ch.top()<<'\n';
    return 0;


}
