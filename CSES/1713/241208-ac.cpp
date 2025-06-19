#include <bits/stdc++.h>

using namespace std;

int main() {
  int z; cin >> z;
  while (z--) {
    int n; cin >> n;
    if (n == 1 || n == 2) {
      cout << n << endl;
    } else {
      int suma = 0;
      for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
          suma += (i * i == n) ? 1 : 2;
        };
      }
      cout << suma << endl;
    }
  }
  return 0;
}

