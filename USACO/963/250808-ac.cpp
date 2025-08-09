#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);
  int k,n; cin >> k >> n;
  int pos[k][n];
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < n; j++) {
      int cow; cin >> cow;
      pos[i][cow-1] = j;
    }
  }

  int counter = 0;

  for (int a = 0; a < n; a++) {
    for (int b = a+1; b < n; b++) {
      if (a == b) continue;
      bool flagA = true;
      bool flagB = true;

      for (int i = 0; i < k; i++) {
        if (pos[i][a] < pos[i][b]) {
          flagA = false;
        } else {
          flagB = false;
        }
      }
      if (flagA || flagB) counter++;
    }
  }

  cout << counter << endl;

  return 0;
}