#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>set1;
    set<int>set2;
    int  n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        set1.insert(num);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int num;
        cin>>num;
        set2.insert(num);
    }
    set<int>Union=set1;
    Union.insert(set2.begin(),set2.end());
    for(auto i:Union)
        cout<<i<<" ";
    cout<<"\n";

}
