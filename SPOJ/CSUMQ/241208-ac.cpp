#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int suma = 0; int a[n];
  for (int i = 0; i < n;i++) {
    int k; cin >> k;
    suma += k;
    a[i] = suma;
  }
  int q; cin >> q;
  for (int z = 0; z < q; z++) {
    int i, j; cin >> i >> j;
    cout << a[j] - ((i == 0) ? 0 : a[i - 1]) << endl;
  }
  return 0;
}
