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
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz=0;
        rev =0;
    }

    node<T>  *CreatNewNode( T value)
    {
        node<T> *newnode = new node<T> ;
        newnode->data = value;
        newnode->nxt =NULL;
        newnode->prv =NULL;

        return newnode;

    }
    void InsertAtTail(int value)
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
    void InsertAtHead(int value)
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
    void push_back(T value)
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
    void push_front(T value)
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
        node<T>  *a= tail;
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
        node<T> *a= head;
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
    T front()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return -1;
        }
        if(rev==0)
        {
            return head->data;
        }
        else
        {
            return tail->data;
        }

    }
    T back()
    {
        if(sz==0)
        {
            cout<<"DEQUE IS EMPTY\n";
            return -1;
        }
        if(rev==0)
        {
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
    T Max_element()
    {
       node<T> *Max= head;
       node<T> *a= head;

        while(a!=NULL)
        {
            if(a->data > Max->data)
            {
               Max =a;
            }
            a=a->nxt;
        }
        return Max->data;
    }

};

int main()
{
   Deque<int> d;
   d.push_back(5);
   d.push_back(100);
   d.push_back(15);

   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.reverse_deque();
   cout<<"After Reverse.\n";
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.push_front(100);
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.popfront();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   d.popback();
   cout<<"Back : " << d.back() << " Front : "<<d.front()<<"\n";
   cout<<"The max element: "<<d.Max_element()<<"\n";
   Deque<char> c;
   c.push_back('A');
   c.push_back('B');
   c.push_back('C');
   c.push_back('D');

   cout<<"Back : " << c.back() << " Front : "<<c.front()<<"\n";
   c.reverse_deque();
   cout<<"After Reverse.\n";

   cout<<"Back : " << c.back() << " Front : "<<c.front()<<"\n";
   cout<<"The max element: "<<c.Max_element()<<"\n";
   return 0;

}

