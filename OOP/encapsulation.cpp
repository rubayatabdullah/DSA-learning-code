#include<bits/stdc++.h>
using namespace std;

class myGF {
    private:
        string name;
        int age;
    
    public:
        void setData(string x, int y) {
            name = x;
            age = y;
        }

        void getData() {
            cout << "Name: " << name << "; " << "Age: " << age << endl;
        }
};

int main()
{
    myGF current;
    current.setData("Chowa", 21);
    current.getData();
    return 0;
}