#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        int n = 0;
        int m = 0;

        while(x > 0) {
            int rem = x % 10;
            rem = rem * pow(10, n);

            if(rem) {
                cout << rem << " ";
                m++;
            }

            x /= 10;
            n++;
            rem = 0;
        }
        cout << endl;
        cout << m << endl;
    }
    cout << endl;
    return 0;
}