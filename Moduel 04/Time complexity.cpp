#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      string ans="No\n";
      for(int j=0;j<n;j++)
      {
          if(i==j)
            continue;
          if(a[i]==a[j])
            ans= "YES\n";
      }
      cout<<"i = "<<i<<" "<<ans;
    }
    return 0;
}
