//maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};


    int maxSubarraySum = 0;
    for(int i=0; i<8; i++) {
        for(int j=i; j<8; j++) {
            int sum = 0;
            for(int k=i; k<=j; k++) {
                sum += arr[k];
            }
            maxSubarraySum = max(maxSubarraySum, sum);
        }
    }

    cout << maxSubarraySum << endl;
    return 0;
}