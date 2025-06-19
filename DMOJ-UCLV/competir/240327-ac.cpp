#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int suma = 0;
  bool suficientes = true;
  if (m > n) suficientes = false;
  for (int i = 0; i < m && suficientes; i++) {
    int a; cin >> a; a /= 4;
    suma += a;
    if (a == 0) suficientes = false;
  }
  if (suma < n) suficientes = false;
  cout << (suficientes ? "DA" : "NE") << endl;
  return 0;
}