#include <bits/stdc++.h>
using namespace std;

// print the subsets with bit manipulation
void printSubset(char arr[], int n)
{
    // cout << "{}" << endl;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << "{" << arr[j] << "}";
        }
        cout << endl;
    }
}

int main()
{
    char arr[] = {'a', 'b', 'c'};
    int n = sizeof(arr) / sizeof(char);

    printSubset(arr, n);
    return 0;
}