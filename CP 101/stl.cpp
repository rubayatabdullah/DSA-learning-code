#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for(int i=0; i<x.size(); i++) {
        if(x[i] == 'H' or x[i] == 'Q' or x[i] == '9') {
            cout << "YES" << endl;
            return 0;
        }
    } cout << "NO" << endl;

    return 0;
}