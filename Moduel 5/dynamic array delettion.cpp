#include<bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void increse_size()
    {
        cap = cap*2;
        int *tmp = new int[cap];
        for(int i =0; i<sz; i++)
        {
            tmp[i]=arr[i];
        }
        delete[] arr;
        arr= tmp;

    }
public:
    Array()
    {
        arr= new int[1];
        cap = 1;
        sz = 0;
    }
    void Push_back(int x)
    {
        if(cap==sz)
        {
            increse_size();
        }
        arr[sz]=x;
        sz++;
    }
    void Insert (int pos,int x)
    {
        if(cap==sz)
        {
            increse_size();
        }
        for(int i =sz-1; i>=pos; i--)
        {
            arr[i+1]=arr[i];

        }
        arr[pos]=x;
        sz++;
    }
    void print()
    {
        for(int i =0; i<sz; i++)
        {
            cout<< arr[i]<< " ";
        }
        cout<<" \n";
    }
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"Current size is 0\n";
            return;
        }
        sz--;
    }





};
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Push_back(50);
    a.Push_back(70);
    a.Push_back(80);
    a.Push_back(90);
    a.Push_back(190);
    a.Insert(0,1099);
    a.print();
    a.Pop_back();
    a.print();

    a.Pop_back();
    a.print();

    a.Pop_back();
    a.print();

    return 0;
}
