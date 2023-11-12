#include<bits/stdc++.h>
using namespace std;
vector<int> merge_short(vector<int>a)
{
    if(a.size()<=1)
        return a;
    int mid = a.size()/2;
    vector<int>b;
    vector<int>c;

    for(int i=0; i<mid; i++)
        b.push_back(a[i]);
    for(int i=mid; i<a.size(); i++)
        c.push_back(a[i]);
    vector<int>sorted_b=merge_short(b);
    vector<int>sorted_c=merge_short(c);

    vector<int>shorted_a;
    int idx1=0;
    int idx2=0;

    for(int i=0; i<a.size(); i++)
    {
        if(idx1==sorted_b.size())
        {
            shorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size())
        {
            shorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1]<sorted_c[idx2])
        {
            shorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            shorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }

    }
    return shorted_a;

}


int main()
{
    vector<int>a= {3,5,2,7,2,3};
    vector<int>ans=merge_short(a);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}








