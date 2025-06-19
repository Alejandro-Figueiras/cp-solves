#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n; cin >> n;
  int suma = 0;
  for (int i = 1; i <= sqrt(n); i++) {
    suma += (n / i) - i + 1;
  }
  cout << suma << endl;

  return 0;
}
