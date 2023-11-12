#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<int>d;
    for(int i =0;i<n;i++)
    {
        int in;
        cin>>in;
        d.push_back(in);
    }
    vector<int>Final;
    while(!d.empty())
    {
        if(d.front()<d.back())
        {
            Final.push_back(d.front());
            d.pop_front();
}
        else
        {
            Final.push_back(d.back());
            d.pop_back();

        }
    }
    for(auto it:Final)
        cout<<it<<" ";
    cout<<"\n";
}
