#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};

  int maxSum = INT_MIN;
  for (int st = 0; st < n; st++)
  {
    int current_sum = 0;
    for (int end = st; end < n; end++)
    {
      current_sum += arr[end];
      maxSum = max(current_sum, maxSum);
    }
  }

  cout << "Maximum subarray sum: " << maxSum << endl;
  return 0;
}