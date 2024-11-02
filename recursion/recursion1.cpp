#include <iostream>
using namespace std;

int power(int n, int p) {
    if(p==0)
        return 1;

    return n * power(n, p - 1);
}

int factorial(int n) {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

//fibonacci number using recursion

int fibonacci(int n) {
    if(n==0 || n==1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
    int n, p;
    cin >> n;

    // cout << power(n, p) << endl;
    // cout << factorial(n) << endl;
    cout << fibonacci(n) << endl;
    return 0;
}