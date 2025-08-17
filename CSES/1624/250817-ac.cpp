#include <bits/stdc++.h>
using namespace std;

int main() {
  bool reserved[8][8];
  for (int i = 0; i < 8; i++) {
    string s; cin >> s;
    for (int j = 0; j < 8; j++) {
      reserved[i][j] = s[j] == '*';
    }
  }

  int queens[8]; iota(queens, queens + 8, 0);
  int valids = 0;
  do {
    // validar bloqueos
    bool availability = true;
    for (int i = 0; i < 8; i++) {
      if (reserved[i][queens[i]]) {
        availability = false;
        break;
      }
    }
    if (!availability) continue;

    // validar diagonales
    set<int> diags;
    bool diagFlag = true;
    for (int i = 0; i < 8; i++) {
      int diag1 = i + queens[i];
      if (diags.count(diag1)) {
        diagFlag = false;
        break;
      }
      diags.insert(diag1);
    }
    diags.clear();
    for (int i = 0; i < 8; i++) {
      int diag2 = i - queens[i];
      if (diags.count(diag2)) {
        diagFlag = false;
        break;
      }
      diags.insert(diag2);
    }
    if (!diagFlag) continue;
    valids++;
  } while (next_permutation(queens, queens + 8));
  cout << valids << endl;
  return 0;
}