#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    map<int,int>mp;
    for(int i=1;i<=n;i++)

    {
        int in;
        cin>>in;
        mp[in]++;
    }

    for(auto it : mp)
    {
        cout<<"Key-> "<<it.first<<"---- Value----> "<<it.second<<'\n';
    }
    cout <<mp.size()<<'\n';
    return 0;
}
