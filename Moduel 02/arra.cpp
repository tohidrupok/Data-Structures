#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum= sum+a[i];
    }
     cout<<"The Ans is:"<<sum<<endl;


    int sum2=1;
    for(int i=0;i<n;i++)
    {
        sum2= sum2*a[i];
    }
     cout<<"The Gun is:"<<sum2;
}
