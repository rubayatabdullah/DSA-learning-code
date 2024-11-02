#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n = 5;
    int mat[n][n];
    int ans = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];

            if(mat[i][j] == 1) ans = abs(3-i-1) + abs(3-j-1);
        }
    }

    cout << ans << endl;


    return 0;
}