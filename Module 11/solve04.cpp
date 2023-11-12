#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool isSubset(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    if (m > n)
    {
        return 0;
    }
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    while (i < n && j < m)
    {
        if (arr1[j] > arr2[i])
        {
            i++;
        }
        else if (arr1[j] == arr2[i])
        {
            j++;
            i++;
        }
        else if (arr1[j] < arr2[i])
            return 0;
    }
    return (j < m) ? false : true;
}
int main()
{
    int a,b,i;
    cin>>a;
    int arr1[a];
    for(i=0; i<a; i++)
    {
        cin>>arr1[i];
    }
    cin>>b;
    int arr2[b];
    for(i=0; i<b; i++)
    {
        cin>>arr2[i];
    }
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, a, b))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
