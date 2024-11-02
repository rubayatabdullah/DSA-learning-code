#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> gold(n);

        for(int i=0; i<n; i++) {
            cin >> gold[i];
        }

        int robinGold = 0, getGold = 0;
        for(int i=0; i<n; i++) {
            if(gold[i] >= k)
                robinGold += gold[i];

            if(gold[i] == 0 && robinGold >0) {
                getGold++;
                robinGold--;
            }
        }
        cout << getGold << endl;
    }
    return 0;
}