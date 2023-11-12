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
class Deque
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz=0;
    }

    node<T>  *CreatNewNode( T value)
    {
        node<T> *newnode = new node<T> ;
        newnode->data = value;
        newnode->nxt =NULL;
        newnode->prv =NULL;

        return newnode;

    }

    void push_back(T value)
    {
        node<T>  *newnode = CreatNewNode(value);
        if(sz==0)
        {
            head=newnode;
            tail=newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;

    }
    void push_front(T value)
    {
      node<T> *newnode = CreatNewNode(value);
        if(sz==0)
        {
            head=newnode;
            tail=newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode-> nxt = head;
        head = newnode;
        sz++;
    }
    void popback()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return ;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;

        }
        node<T>  *a= tail;
        tail = tail->prv;
        delete a;
        tail->nxt=NULL;
        sz--;
    }
    void popfront()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return ;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;

        }
        node<T> *a= head;
        head = head->nxt;
        delete a;
        head->prv=NULL;
        sz--;
    }
    T front()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return -1;
        }
        return head->data;
    }
    T back()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return -1;
        }
        return tail->data;
    }

};

int main()
{
   Deque<int> d;
   d.push_back(5);
   d.push_back(10);
   d.push_back(15);
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.push_front(100);
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.popfront();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.popback();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   Deque<char> c;
   c.push_back('A');
   c.push_back('B');
   c.push_back('C');
   cout<<"Back : " << c.back() << " Front : "<<c.front()<<"\n";

   return 0;

}

