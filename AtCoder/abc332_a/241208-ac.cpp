#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s, k; cin >> n >> s >> k;
  int suma = 0;
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    suma += a * b;
  }
  if (suma < s) suma += k;
  cout << suma;
  return 0;
}
