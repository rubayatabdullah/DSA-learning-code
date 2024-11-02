#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums = {4, 1, 2, 1, 2};
  int ans = 0;

  for (int value : nums)
  {
    ans = ans ^ value;
  }

  cout << ans << endl;
  return 0;
}