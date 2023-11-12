#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>cnt;
        for(int i=1; i<=n; i++)
        {
            int in;
            cin>>in;
            cnt[in]++;
        }
        priority_queue<int>pq;
        for(pair<int,int>p:cnt)
            pq.push(p.second);

        int prev,nxt,ans=0;
        while(pq.size()>=2)
        {
            prev = pq.top();
            pq.pop();
            nxt = pq.top();
            pq.pop();
            prev--,nxt--;
            if(prev!=0)
                pq.push(prev);
            if(nxt!=0)
                pq.push(nxt);
        }
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<'\n';
    }
    return 0;
}
