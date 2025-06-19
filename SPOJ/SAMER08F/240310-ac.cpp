#include <iostream>
#include <math.h>
using namespace std;

int main() {
  do {
    int n; cin >> n;
    if (n == 0) break;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
      suma += pow(n - i + 1, 2);
    }
    cout << suma << endl;
  } while (true);

  return 0;
}
