#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
