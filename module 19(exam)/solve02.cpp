#include<bits/stdc++.h>
using namespace std;
void quicksort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quicksort(arr, 0, n-1);
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    for (int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
