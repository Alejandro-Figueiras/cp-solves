#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);

  int m, n, k;
  cin >> m >> n >> k;
  for (int i = 0; i < m; i++) {
    string s; cin >> s;
    for (int a = 0; a < k; a++) {
      for (int j = 0; j < n; j++) {
        for (int b = 0; b < k; b++) {
          cout << s[j];
        }
      }
      cout << endl;
    }
  }

  return 0;
}