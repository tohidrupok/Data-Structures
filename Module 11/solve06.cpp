#include<bits/stdc++.h>
using namespace std;
int binary_serch(int A[],int n,int x)
{
    int left,right,mid;
    left= 0;
    right=n-1;
    while(left<=right)
    {
        mid = (left+right)/2;
        if( A[mid]==x && A[mid+1]==x )
        {
            return mid;
        }
        if(A[mid]<x)
            left=mid+1;
        else
            right=mid -1;
    }
}
int main()
{
    int x,n;
    cin>>n;
    int arra[n];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    cin>>x;
   int ans=  binary_serch(arra,n,x);
   cout<<ans;

    return 0;
}
