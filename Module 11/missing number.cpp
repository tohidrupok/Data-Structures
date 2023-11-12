#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int N)
{
    int i;
    int temp[N + 1];
    for(int i = 0; i <= N; i++)
    {
        temp[i] = 0;
    }

    for(i = 0; i < N; i++)
    {
        temp[arr[i] - 1] = 1;
    }


    int ans;
    for (i = 0; i <= N ; i++)
    {
        if (temp[i] == 0)
            ans = i + 1;
    }
    cout << ans;
}

/* Driver code */
int main()
{
    int x;
    cin>>x;
    int arr[x-1];
    for(int i=0; i<x-1; i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
}
