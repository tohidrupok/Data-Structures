#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int max = findMax(arr, n - 1);
        return arr[n - 1] > max ? arr[n - 1] : max;
    }
}

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout <<findMax(arr,n);
    return 0;
}
