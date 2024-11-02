#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int maxWealth = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] > maxWealth) {
            maxWealth = arr[i];
        }
    }

    int cost = 0;
    for(int i=0; i<n; i++) {
        cost += maxWealth - arr[i];
    }

    cout << cost << endl;
    return 0;
}