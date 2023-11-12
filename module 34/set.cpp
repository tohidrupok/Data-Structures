#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    //Insert O(log(n))
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    //Print /0(n)
    for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";
    cout<<"Print 2nd Way!"<<'\n';
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    //Erease o(logn)
    st.erase(5);
    for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";
    //Find o(logn)
    if(st.find(7) != st.end())
    {
        cout<<"7 found\n";
    }
    else
    {
        cout<<"7 not found\n";
    }
    cout<<"Set Size : "<<st.size()<<'\n';
    return 0;

}
