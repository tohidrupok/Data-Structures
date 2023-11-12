#include<bits/stdc++.h>
using namespace std;
vector<int> merge_short(vector<int>a)
{
    if(a.size()<=1)
        return a;
    int mid = a.size()/2;
    vector<int>x;
    vector<int>y;

    for(int i=0; i<mid; i++)
        x.push_back(a[i]);
    for(int i=mid; i<a.size(); i++)
        y.push_back(a[i]);
    vector<int>sorted_p=merge_short(x);
    vector<int>sorted_q=merge_short(y);

    vector<int>final_arra_ay;
    int idx1=0;
    int idx2=0;
    int ans=0;
    for(int i =0; i<a.size(); i++)
    {

        if(idx1==sorted_p.size())
        {
            final_arra_ay.push_back(sorted_q[idx2]);
            idx2++;
        }
        else if(idx2==sorted_q.size())
        {
            final_arra_ay.push_back(sorted_p[idx1]);
            idx1++;
        }
        else if( sorted_p[idx1]<sorted_q[idx2])
        {

            final_arra_ay.push_back(sorted_p[idx1]);
            idx1++;
        }
        else
        {
            ans++;
            final_arra_ay.push_back(sorted_q[idx2]);
            idx2++;
        }

    }
    cout<<ans<<"\n";
    return final_arra_ay;
}
int main()
{
    vector<int>a= {6,1,3,2};
    vector<int>ans=merge_short(a);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}
