// arithematic subarray problem
#include <bits/stdc++.h>
using namespace std;

int length_of_arithematic_subarray(int arr[], int n)
{
  int ans = 2, pd = arr[1] - arr[0], curr = 2, j = 2;

  while (j < n)
  {
    if (pd == arr[j] - arr[j - 1])
    {
      curr++;
    }
    else
    {
      pd = arr[j] - arr[j - 1];
      curr = 2;
    }
    ans = max(curr, ans);
    j++;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << length_of_arithematic_subarray(arr, n) << endl;
  return 0;
}