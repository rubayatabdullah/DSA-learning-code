#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<string> names;

    names.push("Rubayat");
    names.push("Sifat");
    names.push("Nafim");
    names.push("Mahin");

    names.pop();

    cout << names.top() << endl;

    return 0;
}