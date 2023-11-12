#include<bits/stdc++.h>
using namespace std;
int n,k;

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
     int count = 0; // Initialize result

    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (final_arra_ay[i] + final_arra_ay[j] == k)
            {
                  count++;
            }


    cout<<count;
    return final_arra_ay;
}
int main()
{
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector<int>ans=merge_short(a);
    //for(int i=0; i<ans.size(); i++)
        //cout<<ans[i]<<" ";


    return 0;
}
