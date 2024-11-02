#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;

    if(!s.empty()) s[0] = ::toupper(s[0]);

    cout << s << endl;
    return 0;
}