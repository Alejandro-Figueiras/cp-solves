#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    set<int> presentes;
    vector<int> a;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int k; cin >> k;
        if (!presentes.count(k)) {
          a.push_back(k);
          presentes.insert(k);
        }
      }
    }
    for (int i = 1; i <= 2 * n; i++) {
      if (!presentes.count(i)) {
        cout << i;
      }
    }
    int m = a.size();
    for (int i = 0; i < m; i++) {
      cout << " " << a[i];
    }
    cout << endl;
  }
  return 0;
}
