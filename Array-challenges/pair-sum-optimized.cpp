#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target)
{
  int n = nums.size();
  vector<int> ans;

  int st = 0, end = n - 1;

  while (st < end)
  {
    if (nums[st] + nums[end] == target)
    {
      ans.push_back(st);
      ans.push_back(end);
      return ans;
    }

    if (nums[st] + nums[end] > target)
    {
      end--;
    }
    else
    {
      st++;
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> ans = pairSum(nums, target);

  cout << ans[0] << " " << ans[1] << endl;

  return 0;
}