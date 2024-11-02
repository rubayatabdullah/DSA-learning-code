#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string num;
        cin >> num;

        reverse(num.begin(), num.end());

        vector<int> ans;

        for(int i=0; i<num.size(); i++) {
            //ith index digit
            int d = num[i] - '0'; //substract 0 to find the digit

            int round = d * pow(10, i);

            if(round) {
                ans.push_back(round);
            }
        }

        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}