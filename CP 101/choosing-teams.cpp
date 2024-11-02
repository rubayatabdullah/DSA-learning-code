#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int valid_participants = 0;

    for(int i=0; i<n; i++) {
        int already_attended;
        cin >> already_attended;

        int can_attend = 5 - already_attended;

        if(can_attend >= k) {
            valid_participants++;
        }
    }

    cout << (valid_participants / 3) << endl;
    return 0;
}