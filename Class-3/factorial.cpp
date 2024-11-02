#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int factorial = 1;

  for(int i=n; i>0; i--){
    factorial *= i;
  }

  cout << factorial << endl;
  return 0;
}