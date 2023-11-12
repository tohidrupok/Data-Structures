#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
};
class LinkedList
{
public:
    node * head ;
    LinkedList()
    {
        head =NULL;
    }

    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void InsertAThead(int value)
    {
        node *a=CreateNewNode(value);
        if(head==NULL)
        {
            head =a;
            return;
        }
        a->nxt =head;
        head= a;

    }
    void Trafverse()
    {
        node *a= head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";

    }
    int SerchDistinctValuse(int value)
    {
        node *a= head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a=a->nxt;
            index++;
        }
        return -1;

    }
    void SerchAllvalue(int value)
    {
         node *a= head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
               cout<<value<<" is found at index "<<index << "\n";
            }
            a=a->nxt;
            index++;
        }
        
          



    }

};
int main()
{
    LinkedList l;
    l.InsertAThead(10);
    l.Trafverse();
    l.InsertAThead(30);
    l.Trafverse();

    l.InsertAThead(20);
    l.Trafverse();
    l.InsertAThead(30);
    l.Trafverse();
    cout<<"10 is found at " <<l.SerchDistinctValuse(10)<<"\n";
    cout<<"5 is found at " <<l.SerchDistinctValuse(5)<<"\n";
    cout<<"30 is found at " <<l.SerchDistinctValuse(30)<<"\n";

    l.SerchAllvalue(30);
    l.SerchAllvalue(10);

    return 0;
}
