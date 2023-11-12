#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0; i<n; i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int val:v)
        cout<<val <<" ";
    cout<<'\n';
    cout<<'\n';
    int q;
    cin>>q;
    while(q--)
    {
        int type,k;
        cin>>type>>k;
        if(type==1)
        {
            auto it =lower_bound(v.begin(),v.end(),k);
            if(it != v.end())
            {
                int inx = it - v.begin(),value = *it;
                cout<<inx<<"->"<<value<<'\n';
            }
            else
                cout<<-1 <<'\n';

        }
        else
        {
            auto it =upper_bound(v.begin(),v.end(),k);
            if(it != v.end())
            {
                int inx = it - v.begin(),value = *it;
                cout<<inx<<"->"<<value<<'\n';
            }
            else
                cout<<-1 <<'\n';
        }
    }
    return 0;
}

