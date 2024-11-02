#include <bits/stdc++.h>
using namespace std;

int main()
{
  // copy from another vector
  vector<int> first;                               // empty element vector
  vector<int> second(4, 100);                      // 4 values of 100
  vector<int> third(second.begin(), second.end()); // copy vector
  vector<int> fourth(third);                       // copy vector

  // copy from another array
  int myNums[] = {16, 2, 77, 29};
  vector<int> fifth(myNums, myNums + sizeof(myNums) / sizeof(int));

  // for (auto element : fifth)
  // {
  //   cout << element << endl;
  // }

  cout << second.max_size() << endl;
  return 0;
}