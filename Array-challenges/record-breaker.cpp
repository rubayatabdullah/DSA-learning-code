// record breaker cpp
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int n;
  cin >> n;
  int arr[n + 1];
  arr[n] = -1;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int count = 0;
  while (t--)
  {
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] > mx && arr[i] > arr[i + 1])
      {
        count++;
        mx = arr[i];
      }
    }
    cout << "#" << t + 1 << ": " << count << endl;
  }
  return 0;
}