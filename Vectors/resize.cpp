#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> numbers;
  for (int i = 1; i <= 10; i++)
    numbers.push_back(i);

  numbers.resize(5);
  numbers.resize(8, 100);
  numbers.resize(12);

  for (auto number : numbers)
    cout << number << " ";
  cout << endl;

  cout << numbers.back() << endl;

  cout << numbers.capacity() << endl;

  cout << numbers.data() << endl;

  return 0;
}