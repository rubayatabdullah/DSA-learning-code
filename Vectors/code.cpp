#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    map<string, int> m;
    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 50;
    m["Tablet"] = 120;
    m["Watch"] = 50;

    for(auto value: m) {
        cout << value.first << " " << value.second << endl; 
    }
    return 0;
}