#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myWriteFile("filename.txt");
    
    myWriteFile << "Hi, this is Rubayat. Now I am learning OOP(Object Oriented Programming). This is C++ file library.";

    myWriteFile.close();

    string myText;

    ifstream myReadFile("filename.txt");

    while(getline(myReadFile, myText)) {
        cout << myText;
    }

    myReadFile.close();

    return 0;
}