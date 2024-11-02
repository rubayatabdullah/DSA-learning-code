#include<bits/stdc++.h>
using namespace std;

void getBit(int n, int pos) {
    cout << ((n & (1 << pos))) << endl;
}

int main()
{
    int n = 7;
    getBit(n, 2);
    return 0;
}