#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int arr[1001];
    string s;
    cin >> s;

    int count = 0;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == '+') continue;
        else arr[count++] = s[i] - '0';
    }

    sort(arr, arr+count);

    for(int i=0; i<count; i++) {
        cout << arr[i];
        
        if(i == count - 1) break;

        cout << "+";
    }
    
    return 0;
}