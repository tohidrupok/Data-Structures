#include<bits/stdc++.h>
using namespace std;
vector<string> merge_short(vector<string>a)
{
    if(a.size()<=1)
        return a;
    int mid = a.size()/2;
    vector<string>x;
    vector<string>y;

    for(int i=0; i<mid; i++)
        x.push_back(a[i]);
    for(int i=mid; i<a.size(); i++)
        y.push_back(a[i]);
    vector<string>sorted_p=merge_short(x);
    vector<string>sorted_q=merge_short(y);

    vector<string>final_arra_ay;
    int idx1=0;
    int idx2=0;

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

            final_arra_ay.push_back(sorted_q[idx2]);
            idx2++;
        }

    }

    return final_arra_ay;
}
int main()
{
    int n;
    cin>>n;

    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<string>ans=merge_short(arr);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}
