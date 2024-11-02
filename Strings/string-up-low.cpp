#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    //convert upper case
    for (int i = 0; i < str.size(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    cout << str << endl;

    //convert to lower case
    for (int i = 0; i < str.size(); i++) {
        if(str[i] >= 'A' && str[i] <= 'B') {
            str[i] += 32;
        }
    }

    cout << str << endl;
    return 0;
}