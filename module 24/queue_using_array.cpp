#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
class Queue
{
public:
    int a[MAX_SIZE];
    int l,r,sz;
    Queue()
    {
        r=-1;
        l=0;
        sz =0;
    }
    void enqueue(int value)
    {
        if(sz== MAX_SIZE)
        {
            cout<<"Queue is Full.\n";
            return;
        }
        if(r==MAX_SIZE)
        {
            r=0;
        }
        r++;
        a[r]=value;
        sz++;
    }
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"Queue is empty.\n";
            return;
        }
        l++;
         if(l==MAX_SIZE)
        {
            l=0;
        }
        sz--;
    }
    int fornt()
    {
        if(sz==0)
        {
            cout<<"Queue is empty.\n";
            return -1;
        }
        return a[l];
    }
    int Size()
    {
        return sz;

    }
};
int main()
{
    Queue q;
    q.enqueue(20);
    q.enqueue(40);
    q.enqueue(36);

    cout<<"The Q size is:"<<q.Size()<<'\n';
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';
    q.dequeue();
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';
    q.dequeue();
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';
    q.dequeue();
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';



    return 0;
}
