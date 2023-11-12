#include <bits/stdc++.h>
using namespace std;

void print(list<int>l)
{
    //O(n)

    auto a = l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    //cout<<"\n";
}

//O(n)
void Insert(list<int>&l, int index, int value)
{
    auto it = l.begin(); //O(1)
    advance(it, index);  //O(index)
    l.insert(it, value);  //O(1)
}

//O(n)
void Delete(list<int>&l, int index)
{
    auto it = l.begin(); //O(1)
    advance(it, index);  //O(index)
    l.erase(it); //O(1)
}
void deleteValue(list<int>& l, int value)
{

    for (auto it = l.begin(); it != l.end(); ++it)
    {

        if (*it == value)
        {
            l.erase(it);
            return;
        }
    }
}
int main()
{
    list<int> l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);
    print(l);

    deleteValue(l,4);

    cout<<"\n";
    cout<<"STL list containing [";
    print(l);
    cout<<"]";



    return 0;
}
