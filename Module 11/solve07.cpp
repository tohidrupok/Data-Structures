#include <bits/stdc++.h>
using namespace std;
int deleteElements(int arr[], int n, int l, int r)
{
    int i, newIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (i < l-1 || i >= r)
        {
            arr[newIndex] = arr[i];
            newIndex++;
        }
    }
    return newIndex;
}
int main()
{
    int n,l,r,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>l>>r;
    int ans = deleteElements(arr, n, l, r);

    for (i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
