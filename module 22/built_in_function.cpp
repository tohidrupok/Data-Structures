#include<bits/stdc++.h>
using namespace std;
//0(n)
void print(list<int>l)
{
    //list<int>::iterator a= l.begin();
    auto a=l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
}
//0(n)
void Insert(list<int>&l,int index,int value)
{
    auto it = l.begin(); //0(1)
    advance(it,index);   //0(index)
    l.insert(it,value);  //0(1)
}
//0(n)
void Delet(list<int>&l,int index)
{
    auto it= l.begin(); //0(1)
    advance(it,index);  //0(index)
    l.erase(it);        //0(1)
}
int main()
{
    list <int> l;
    //0(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);
    //0(1)
    l.push_back(40);
    l.push_back(50);
    print(l);
    //0(1)
    l.pop_back();
    print(l);
    l.pop_front();
    print(l);

    //insert at any index
    Insert(l,1,10008);
    print(l);
    cout<<"Now list size is :"<<l.size()<<"\n";
    Delet(l,1);
    print(l);
    cout<<"Now list size is :"<<l.size()<<"\n";

    return 0;
}
