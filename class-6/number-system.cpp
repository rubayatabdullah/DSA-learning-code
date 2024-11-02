#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int decimalToBinary(int n)
{
  int ans = 0, pow = 1;
  while (n > 0)
  {
    int rem = n % 2;
    n = n / 2;
    ans += rem * pow;
    pow *= 10;
  }
  return ans;
}
// my own code
int binToDec(int binNum)
{
  int ans = 0;
  int i = 0;
  while (binNum > 0)
  {
    int rem = binNum % 10;
    binNum /= 10;
    // int i = 0;
    ans += rem * pow(2, i);
    i++;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;

  // cout << decimalToBinary(n) << endl;
  cout << binToDec(n) << endl;

  return 0;
}