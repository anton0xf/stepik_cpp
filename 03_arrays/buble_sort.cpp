#include <iostream>
using namespace std;

void print_a(int n, int a[]) {
  for(int i=0; i<n; i++) {
    cout << a[i] << ' ';
  }
  cout << endl;
}

int main() {
  const int n = 4;
  int a[n] = {4, 3, 2, 1};
  for (int i=n-1; i>0; i--) {
    // cout << "i = " << i << endl;
    for (int j=0; j<i; j++) {
      // cout << "j = " << j << endl;
      if(a[j] > a[j+1]) {
        // cout << "swap" << endl;
        int t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
        // print_a(n, a);
      }
    }
  }
  print_a(n, a);
}
