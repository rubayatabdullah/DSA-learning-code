#include<bits/stdc++.h>
using namespace std;

void printNumber(int* numberPtr){
  cout << *numberPtr << endl;
}

void printLatter(char* characterPtr){
  cout << *characterPtr << endl;
}

void print(void* ptr,char type) {
  switch (type)
  {
    case 'i': cout << *((int*)ptr) << endl;break;
    case 'c': cout << *((char*)ptr) << endl;break;
    case 'f': cout << *((float*)ptr) << endl;break;
  }
}

int main()
{
  int number = 5;
  char latter = 'a';
  // printNumber(&number);
  // printLatter(&latter);

  print(&number, 'i');
  print(&latter, 'c');

  return 0;
}