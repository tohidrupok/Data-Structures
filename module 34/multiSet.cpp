#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>a;

    //Insert o(logn)
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);
    a.insert(5);

    //Print O(n)
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    //sizeO(1)
    cout<<"Set Size : "<<a.size()<<'\n';
    //rease all occurrence
    a.erase(4);
    //Print O(n)
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<"Set Size : "<<a.size()<<'\n';
    //erase single occurrance
    a.erase(a.find(5));
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<"Set Size : "<<a.size()<<'\n';
     if(a.find(4) != a.end())
    {
        cout<<"4 found\n";
    }
    else
    {
        cout<<"4 not found\n";
    }

    return 0;
}
