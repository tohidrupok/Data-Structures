#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <pair<pair<string,string>,int> >v;
    //pair<pair<string,string>,int>p;
    for(int i=1;i<=n;i++)
    {
        string fullname,nickname;
        int age;
        cin>>fullname>>nickname;
        cin >>age;

        v.push_back( {{fullname,nickname},age} );

    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<'\n';
    }

    return 0;
}
