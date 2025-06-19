#include <bits/stdc++.h>

using namespace std;

int foundMax(int a, int b, int c, int d, int e) {
  return max(a, max(b, max(c, max(d, e))));
}

int main() {
  int n; cin >> n;
  for (int z = 0; z < n; z++) {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    for (int i = 2; i <= foundMax(a, b, c, d, e); i++) {
      if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0 && e % i == 0) {
        a /= i; b /= i; c /= i; d /= i; e /= i; i--;
      }
    }

    cout << (a + b + c + d + e) << endl;

  }
  return 0;
}