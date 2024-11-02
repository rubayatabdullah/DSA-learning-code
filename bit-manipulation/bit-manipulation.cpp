#include<bits/stdc++.h>
using namespace std;


//get the bit of a position
int getBit(int n, int position) {
    return ((n & (1 << position)) != 0);
}

//set bit in a certain position
int setBit(int n, int position) {
    return (n | (1 << position));
}

//clear bit in a position
int clearBit(int n, int position) {
    int mask = ~(1 << position);
    return (n & mask);
}

int updateBit(int n, int position, int value) {
    int mask = ~(1 << position);
    n = n & mask;
    return (n | (value << position));
}

int main()
{
    int n, positon, value;
    cin >> n >> positon >> value;

    // cout << getBit(n, positon) << endl;
    // cout << setBit(n, positon) << endl;
    cout << updateBit(n, positon, value) << endl;

    return 0;
}