#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);

  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long minimo = 1000000000;
  for (int i = 0; i < n; i++) {
    long long cantidad = 0;
    for (int j = 0; j < n; j++) {
      int indice = (i + j) % n;
      cantidad += a[indice] * j;
    }
    if (cantidad < minimo)
      minimo = cantidad;
  }

  cout << minimo << endl;

  return 0;
}