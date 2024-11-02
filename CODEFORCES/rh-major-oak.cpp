#include <bits/stdc++.h>
using namespace std;

void luckOrNot() {
    int n, k;
    cin >> n >> k;

    cout << (((n + 1)*n / 2 - (n-k)*(n-k+1)/2) % 2 ? "NO" : "YES") << endl; 
}

int main()
{
    int t; 
    cin >> t;
    while(t--) luckOrNot();
    return 0;
}