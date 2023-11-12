#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a= {1,3,6,5,4,7,2,8,1};
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    sort(a.begin()+1,a.begin()+7+1);
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
