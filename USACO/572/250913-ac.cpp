#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);
  int n, q; cin >> n >> q;

  int r1[n + 1] = { 0 }, r2[n + 1] = { 0 }, r3[n + 1] = { 0 };
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    if (x == 1) {
      r1[i]++;
    } else if (x == 2) {
      r2[i]++;
    } else {
      r3[i]++;
    }
    r1[i] += r1[i - 1];
    r2[i] += r2[i - 1];
    r3[i] += r3[i - 1];
  }

  for (int i = 0; i < q; i++) {
    int a, b; cin >> a >> b;
    int res1 = r1[b] - r1[a - 1],
      res2 = r2[b] - r2[a - 1],
      res3 = r3[b] - r3[a - 1];
    cout << res1 << " " << res2 << " " << res3 << endl;
  }


  return 0;
}