#include<bits/stdc++.h>
using namespace std;

void printCh(int n) {
  for(int i=0; i<n; i++) {
    char ch = 'A';
    for(int j=0; j<n; j++) {
      cout << ch << " ";
      ch = ch + 1; 
    }
    cout << endl;
  }
}

void pettern1(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++)
      cout << j << " ";
    cout << endl;
  } 
}

void pettern2(int n) {
  int m = 1;

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout << m << " ";
      m++;
    }
    cout << endl;
  }
}

void pattern3(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=0; j<i; j++)
      cout << "*" << " ";
    cout << endl;
  }
}

void pattern4(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=0; j<i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}
void pattern4Ch(int n) {
  for(int i=0; i<n; i++) {
    char ch = 'A';
    for(int j=0; j<i+1; j++) {
      char character = ch + i;
      cout << character << " ";
    }
    cout << endl;
  }
}

void pattern5(int n) {
  for(int i=0; i<n; i++) {
    for(int j=1; j<=i+1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
//reverse triangle pattern
void pattern6(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=0; j<i; j++) {
      cout << i-j << " ";
    }
    cout << endl;
  }
}
//character version
void pattern6Ch(int n) {
  for(int i=0; i<n; i++) {
    char ch = 'A';
    char ch1 = ch + i;
    for(int j=0; j<i+1; j++) {
      char ch2 = ch1-j;
      cout << ch2 << " ";
    }
    cout << endl;
  }
}
//Floyd's triangle pattern
void pattern7(int n) {
  int m=1;
  for(int i=0; i<n; i++) {
    for(int j=0; j<i+1; j++) {
      cout << m++ << " ";
    }
    cout << endl;
  }
}
//Inverted triangle pattern
void pattern8(int n) {
  for(int i=0; i<n; i++) {
    //spaces
    for(int j=0; j<i; j++) {
      cout << "  ";
    }
    //numbers
    for(int j=n; j>i; j--) {
      cout << i+1 << " ";
    }
    cout << endl;
  }
}
//pyramid

void pattern9(int n) {
  for(int i=0; i<n; i++) {
    for(int j=n-1; j>i; j--) 
      cout << "  ";
    
    for(int j=0; j<i+1; j++)
      cout << j+1 << " ";

    for(int j=0; j<i; j++)
      cout << i-j << " ";
    cout << endl;
  }
}

//Hollow Diamond Pattern
void pattern10(int n) {
  for(int i=0; i<n; i++) {
    for(int j=n-1; j>i; j--) 
      cout << " ";
    cout << "*";

    if(i != 0){
      for(int j=0; j<2*i-1; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }

  for(int i=0; i<n-1; i++) {
    for(int j=0; j<=i; j++) {
      cout << " ";
    }
    cout << "*";

    if(i != n-1) {
      for(int j=0; j<2*(n-i)-5; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  int n = 4;

  // pettern2(n);
  // pattern3(4);
  // pattern4(n);
  // pattern4Ch(n);
  // pattern6Ch(n);
  pattern10(n);

  return 0;
}