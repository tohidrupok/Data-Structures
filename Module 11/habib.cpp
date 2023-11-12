#include<bits/stdc++.h>

using namespace std;

int c = 0;

void marge(int a[], int b[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] + b[i] > 5){
            continue;
        }
        else if(a[i] + b[i] < 5) {
            continue;
        }
        else{
            c++;
        }
    }
}

void mergeSort(int arr[],int l,int r) {
    int mid = (l+r)/2;

    if(l<r) {
        int arr1[mid], arr2[mid];
        for(int i = 0; i < mid; i++) {
            arr1[i] = arr[i];
        }

        for(int i = mid; i < r+l; i++) {
            arr2[i-mid] = arr[i];
        }
        mergeSort(arr1,0,mid);
        mergeSort(arr2,0, mid);

        marge(arr1, arr2, mid);
    }
}

int main(){
    int arr[5] = {6, 1, 3, 2, 4};
    mergeSort(arr, 0, 5);
    cout << c;
    return 0;
}
