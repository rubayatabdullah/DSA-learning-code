#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[6] = {12, 45, 23, 51, 19, 8};
  int n = sizeof(arr) / sizeof(int);

  int step = 1;
  while (step < n)
  {
    for (int i = 0; i < n - step; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    step++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}