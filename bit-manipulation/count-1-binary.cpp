#include<bits/stdc++.h>
using namespace std;

int noOfOne(int n) {
    int i = 0;

    while(n) {
        n = (n & n - 1);
        i++;
    }
    return i;
}

int main()
{
    // number of test cases;
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        cout << noOfOne(n) << endl;
    }
    return 0;
}