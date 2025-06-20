#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        impares += a[i] == '0';
        pares += b[i] == '0';
      } else {
        pares += a[i] == '0';
        impares += b[i] == '0';
      }
    }

    if (impares >= (n+1)/2 && pares >= n/2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
