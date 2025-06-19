#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n; cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int total = 0;
  for (int i = 0; i < m; i++) {
    if (a[i] >= 0) break;
    total += a[i] * -1;
  }
  cout << total << endl;
  return 0;
}
