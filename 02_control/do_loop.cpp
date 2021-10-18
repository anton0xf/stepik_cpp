#include <iostream>
using namespace std;
int main() {
  int n = 113;
  int sum;
  do {
    n++;
    int m = n;
    sum = 0;
    while (m > 0) {
      sum += m % 10;
      m /= 10;
    }
  } while (sum != 5);
  cout << n << endl;
}
