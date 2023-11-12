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
    sort(a.rbegin(),a.rend());
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int k;
        cin>>k;
      int low=0; int higt=n-1;
      bool found=0;
      while(low<=higt)
      {

          int mid=(low+higt)/2;
          if(a[mid]==k)
          {
              cout<<"YES"<<"\nIts index of Posotion is : "<<mid<<"\n";
              found=1;

          }
          if(a[mid]>k)
          {
              higt=mid-1;
          }
          else
          {
              low= mid+1;
          }

      }
      if(found==0)
          {
              printf("No\n");
          }

    }

}
