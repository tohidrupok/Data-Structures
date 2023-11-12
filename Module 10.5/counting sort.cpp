#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int Count[n+1];
    for(int i=0; i<n; i++)
    {
        Count[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        int x= A[i];
        Count[x]=Count[x]+1;
    }
    for(int i=1; i<n; i++)
    {
        //Count[i]=Count[i]+Count[i-1];
        Count[i]+=Count[i-1];
    }
    int Output[n];
    for(int i=n-1;i>=0;i--)
    {
        int p=A[i];
        Count[p]=Count[p]-1;
        int q= Count[p];
        Output[q]=A[i];
       //Output[--Count[A[i]]]=A[i];

    }
    for(int i=0; i<n; i++)
    {
        A[i]=Output[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}
