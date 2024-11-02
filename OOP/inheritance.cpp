#include <iostream>
#include <string>
using namespace std;

class book {
    public:
        string name = "Atomic Habits";
        void moto() {
            cout << "The more you read, the more you learn \n";
        }
};

class bookInfo: public book {
    public:
        string author = "James Clear";
};

int main() {
    bookInfo myBook;

    cout << myBook.name << endl;
    myBook.moto();
    cout << myBook.author << endl;

    return 0;
}