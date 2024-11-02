#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

void boubbleSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    printArray(arr, n);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    boubbleSort(arr, n);

    return 0;
}