#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
    node *prv;
};
class Deque
{
public:
    node *head;
    node *tail;
    int sz;
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz=0;
        rev =0;
    }

    node *CreatNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt =NULL;
        newnode->prv =NULL;

        return newnode;

    }
    void InsertAtTail(int value)
    {
       node *newnode = CreatNewNode(value);
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
    void InsertAtHead(int value)
    {
       node *newnode = CreatNewNode(value);
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

    void push_back(int value)
    {
       if(rev==0)
       {
           InsertAtTail(value);
       }
       else
       {
           InsertAtHead(value);
       }

    }
    void push_front(int value)
    {

      if(rev==0)
       {
           InsertAtHead(value);
       }
       else
       {
           InsertAtTail(value);
       }
    }
    void deleteLast()
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
        node *a= tail;
        tail = tail->prv;
        delete a;
        tail->nxt=NULL;
        sz--;
    }
    void deleteFirst()
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
        node *a= head;
        head = head->nxt;
        delete a;
        head->prv=NULL;
        sz--;
    }
    void popback()
    {
       if(rev==0)
       {
           deleteLast();
       }
       else
       {
           deleteFirst();
       }
    }
    void popfront()
    {
         if(rev==0)
       {
           deleteFirst();
       }
       else
       {
           deleteLast();
       }
    }
    int front()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return -1;
        }
        if(rev==0){
          return head->data;
        }
        else
        {
            return tail->data;
        }

    }
    int back()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return -1;
        }
        if(rev==0){
            return tail->data;
        }
        else
        {

            return head->data;
        }
    }
    void reverse_deque()
    {
        if(rev==0)
        {
            rev = 1 ;
        }
        else
        {
            rev = 0;
        }
    }

};

int main()
{
   Deque d;
   d.push_back(5);
   d.push_back(10);
   d.push_back(15);
   d.reverse_deque();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.push_front(100);
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.popfront();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.popback();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   return 0;

}
