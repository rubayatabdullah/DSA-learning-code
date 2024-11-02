#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<int> ans(n, 1);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j) ans[i] *= arr[j];
        }
    }

    for(auto value: ans) cout << value << " ";
    cout << endl;
    return 0;
}