#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    set<int> b;
    for (int k = 0; k < n; k++) {
      if (a[k] % a[0] != 0) {
        b.insert(a[k]);
      }
    }

    bool divisible = true;
    if (b.size()) {
      int div = *b.begin();
      for (auto v : b) {
        if (v % div != 0) {
          divisible = false;
          break;
        }
      }
    }

    cout << (divisible ? "Yes" : "No") << endl;

  }
  return 0;
}
