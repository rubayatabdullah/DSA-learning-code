#include<iostream>
using namespace std;

int main()
{
    try {
        int age = 15;
        if(age >= 18) {
            cout << "You are old enough. Access granted.";
        } else {
            throw(age);
        }
    }
    catch (int myNum) {
        cout << "Must be 18 years old. Access denied. \n";
        cout << "Your age is " << myNum << endl;
    }

    return 0;
}