#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(int arr[], int n) {
    int maximum = INT_MIN;
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum += arr[j];
            maximum = max(maximum, sum);
        }
    }
    return maximum;
}

int maximumSubarraySum2(int arr[], int n) {
    int best = 0, sum = 0;

    for(int i=0; i<n; i++) {
        sum = max(arr[i], arr[i] + sum);
        best = max(best, sum);
    }
    return best;
}

void maximumSubarraySum3(int arr[], int n) {
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int arr[8] = {-1, 80, 20, -83, 5, 2, -5, 2};

    cout << maximumSubarraySum2(arr, 8) << endl;
    return 0;
}