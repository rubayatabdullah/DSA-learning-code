#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int j = 0; j < n; j++)
  {
    cin >> arr[j];
  }

  int i = 0;
  int minidx, maxidx = -1;
  int mn = INT_MAX;
  int mx = INT_MIN;

  while (i < n)
  {
    mx = max(arr[i], mx);
    mn = min(arr[i], mn);
    i++;
  }

  i = 0;
  while (i < n)
  {
    if (arr[i] == mn)
      minidx = i;
    if (arr[i] == mx)
      maxidx = i;
    i++;
  }

  swap(arr[minidx], arr[maxidx]);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}