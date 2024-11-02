#include <bits/stdc++.h>
using namespace std;

// slection-sort
void selectionSort(int arr[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[6] = {12, 45, 23, 51, 19, 8};
  int n = sizeof(arr) / sizeof(int); // length

  selectionSort(arr, n);

  return 0;
}