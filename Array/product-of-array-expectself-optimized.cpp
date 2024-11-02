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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans(n, 1);

    // prefix
    for (int i = 1; i < n; i++)
        ans[i] = ans[i - 1] * arr[i - 1];
    // suffix
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= arr[i + 1];
        ans[i] *= suffix;
    }

    // print the ans
    for (auto value : ans)
        cout << value << " ";
    cout << "\n";

    return 0;
}