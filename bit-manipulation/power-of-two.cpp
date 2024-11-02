#include<bits/stdc++.h>
using namespace std;

//Is the given number is power of two
bool isPowerOfTwo(int n) {
    return (n && !(n & n - 1));
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << isPowerOfTwo(n) << endl;
    }
    return 0;
}