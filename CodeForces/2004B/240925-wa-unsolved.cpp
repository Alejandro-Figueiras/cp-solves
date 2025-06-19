#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    if ((L > r && R > r) || (L < l && r < L)) {
      cout << 1 << endl;
      continue;
    }
    if (l == L && r == R) {
      cout << max(r, R) - min(l, L) << endl;
      continue;
    }
    if (r == R) {
      cout << R - max(l, L) + 1 << endl;
      continue;
    }
    if (l == L) {
      cout << min(r, R) - l + 1 << endl;
      continue;
    }
    cout << (min(r, R) - max(l, L) + 2) << endl;

  }
  return 0;
}
