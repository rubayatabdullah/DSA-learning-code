#include <iostream>
using namespace std;

int sum(int n) {
    if(n==0)
        return 0;

    return (n + sum(n - 1));
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n) << endl;
    return 0;
}

//that's what i wanna do 
//i wanna change the world and i want to create an ai model to do my work
//no smoking anymore