#include <bits/stdc++.h>

using namespace std;

int sePuede(int a, int b, int c) {
  int mayor = max(b, c);
  int menor = min(b, c);
  int diferencia = mayor - menor;
  if (diferencia % 2 != 0) return 0;
  if (a + menor - (diferencia * 1.5) < 0) return 0;
  return 1;
}

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    // Cada caso de prueba
    int a, b, c; cin >> a >> b >> c;
    cout << sePuede(a, b, c) << " " << sePuede(b, a, c) << " " << sePuede(c, a, b) << endl;
  }
  return 0;
}
