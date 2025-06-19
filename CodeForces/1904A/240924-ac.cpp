#include <bits/stdc++.h>

using namespace std;

int comprobarReina(int a, int b, int x, int y, int q, int w) {
  if (x == q && y == w) return 0;
  if (
    (x + a == q && y + b == w) ||
    (x + a == q && y - b == w) ||
    (x - a == q && y + b == w) ||
    (x - a == q && y - b == w) ||
    (x + b == q && y + a == w) ||
    (x + b == q && y - a == w) ||
    (x - b == q && y + a == w) ||
    (x - b == q && y - a == w)
    ) return 1;
  return 0;
}

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    int a, b, q, w, k, l;
    cin >> a >> b >> k >> l >> q >> w;

    // Rey
    int total = 0;
    total +=
      comprobarReina(a, b, k + a, l + b, q, w) +
      comprobarReina(a, b, k + a, l - b, q, w) +
      comprobarReina(a, b, k - a, l + b, q, w) +
      comprobarReina(a, b, k - a, l - b, q, w);

    if (a != b) {
      total +=
        comprobarReina(a, b, k + b, l + a, q, w) +
        comprobarReina(a, b, k + b, l - a, q, w) +
        comprobarReina(a, b, k - b, l + a, q, w) +
        comprobarReina(a, b, k - b, l - a, q, w);
    }
    cout << total << endl;
  }
  return 0;
}
