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
//Search for a single value
   int SerchDistinctValue(int value)
   {
       node *a=head;
       int index =0;
       while(a!=NULL)
       {

           if(a->data==value)
           {
             return index;
           }

           a= a->nxt;
           index++;
       }
       return -1;


   }
   //Serch All possible occurrence
   void serchAllValue(int value)
   {
        node *a=head;
       int index =0;
       while(a!=NULL)
       {

           if(a->data==value)
           {
             cout<<value<<" is found at index "<<index<<"\n";
           }

           a= a->nxt;
           index++;
       }


   }


};



int main()
{
    Linkedlist l;
    l.InsertAthead(10);
    l.InsertAthead(90);
    l.InsertAthead(100);
    l.InsertAthead(90);
    l.Traverse();
    cout<<"90 is found at the index of :"<<l.SerchDistinctValue(90)<<"\n";
    cout<<"100 is found at the index of :"<<l.SerchDistinctValue(100)<<"\n";
    cout<<"10 is found at the index of :"<<l.SerchDistinctValue(10)<<"\n";
    cout<<"90 is found at the index of :"<<l.SerchDistinctValue(90)<<"\n";
    l.serchAllValue(90);
    return 0;
}
