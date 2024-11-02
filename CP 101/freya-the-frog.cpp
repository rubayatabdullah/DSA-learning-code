#include <bits/stdc++.h>
using namespace std;

void work() {
    int x, y, k;
    cin >> x >> y >> k;

    cout << max(2*(int)ceil(double(x)/k)-1, 2*(int)ceil(double(y)/k)) << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) work();
    return 0;
}