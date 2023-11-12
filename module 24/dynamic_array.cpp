#include<bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int *a;
    int array_cap;
    int l,r,sz;
    Queue()
    {
        a = new int[1];
        array_cap =1;
        r=-1;
        l=0;
        sz =0;
    }
    void remove_circule()
    {
        if(l>r)
        {
            int *temp = new int[array_cap];
            int idx =0;
            for(int i=l; i<array_cap; i++)
            {
                temp[idx]= a[i];
                idx++;
            }
            for(int i=0; i<=r; i++)
            {
                temp[idx]= a[i];
                idx++;
            }
            swap(temp,a);
            l=0;
            r=array_cap-1;
            delete []temp;
        }
    }
    void increase_size()
    {
        remove_circule();
        int *tem = new int [array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            tem[i] = a[i];
        }
        swap(tem,a);
        array_cap= array_cap*2;
        delete []tem;
    }
    void enqueue(int value)
    {
        if(sz==array_cap)
        {
            increase_size();
        }
        r++;
        if(r==array_cap)
        {
            r=0;
        }

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
        if(l==array_cap)
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
    q.enqueue(36);
    q.enqueue(36);
    cout<<"The Q size is:"<<q.Size()<<'\n';
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';
    q.dequeue();
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';
    q.dequeue();
    cout<<"fornt in the Q:"<<q.fornt()<<'\n';
    q.dequeue();
    cout<<"The Q size is:"<<q.Size()<<'\n';


    return 0;
}

