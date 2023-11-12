#include <bits/stdc++.h>
using namespace std;

template<class T>
//Queue using Dynamic Circular array
class Queue
{
public:
    T *a;
    int array_cap;
    int l,r;
    int sz;

    Queue()
    {
        a = new T[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }
    void remove_circular()
    {
        if(l>r)
        {
            T *tmp = new T[array_cap];
            int idx = 0;
            for(int i=l; i<array_cap; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for(int i=0;i<=r;i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp,a);
            l = 0;
            r = array_cap -1;
            delete [] tmp;
        }
    }
    void increase_size()
    {
        remove_circular();
        // size increase
        T *tmp = new T[array_cap*2];
        for(int i=0;i<array_cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        array_cap = array_cap*2;
        delete [] tmp;
    }
    // O(1)
    void enqueue(T value)
    {
        if(sz == array_cap)
        {
            increase_size();
        }
        r++;
        if(r == array_cap)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    // O(1)
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l==array_cap)
        {
            l = 0;
        }
        sz--;
    }
    //O(1)
    T front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    //O(1)
    int size()
    {
        return sz;
    }
};

int main()
{
    Queue<int > q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size : "<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size : "<<q.size()<<"\n";
    Queue<char > qc;
    qc.enqueue('D');
    qc.enqueue('I');
    qc.enqueue('U');
    cout<<"Q size : "<<qc.size()<<"\n";
    cout<<qc.front()<<"\n";
    qc.dequeue();
    qc.dequeue();
    cout<<qc.front()<<"\n";
    qc.dequeue();
    cout<<"Q size : "<<qc.size()<<"\n";



    return 0;
}
