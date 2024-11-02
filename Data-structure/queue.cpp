#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> nums;

    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);

    nums.pop();

    cout << nums.front() << endl;
    cout << nums.back() << endl;


    return 0;
}