#include <bits/stdc++.h>
#include <cstring>
#include <cctype>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str1, str2;
    cin >> str1 >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if(str1 > str2) cout << "1" << endl;
    else if(str1 < str2) cout << "-1" << endl;
    else cout << "0" << endl;

    return 0;
}