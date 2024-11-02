#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cin >> key;

  sort(arr, arr + n);

  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;

  int s = 0, e = n;

  while (s <= e)
  {
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
      cout << mid << endl;
    }
    else if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }

  return 0;
}