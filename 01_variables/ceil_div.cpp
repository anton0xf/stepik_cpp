#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "Enter two integer numbers:" << endl;
  cin >> a >> b;
  int c = (a + b - 1) / b;
  cout << a << " /(up) " << b << " = " << c << endl;
}
