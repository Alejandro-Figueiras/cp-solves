#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);

  int n, m; cin >> n >> m;
  int tramos[101] = {0}, t = 0;

  // Velocidad limite
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    for (int j = 0; j < a; j++) {
      tramos[t++] = b;
    }
  }

  int z = 0; int maximo = 0;
  // Velocidad del Tractor
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    for (int j = 0; j < a; j++) {
      maximo = max(maximo, b - tramos[z++]);
    }
  }

  cout << maximo << endl;

  return 0;
}