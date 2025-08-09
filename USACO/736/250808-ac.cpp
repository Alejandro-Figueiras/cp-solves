#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  int n,m; cin >> n >> m; 
  string spotted[n];
  string simple[n];

  for (int i = 0; i < n; i++) cin >> spotted[i];
  for (int i = 0; i < n; i++) cin >> simple[i];

  int counter = 0;
  for (int c = 0; c < m; c++) {
    map<char, int> sp, si;
    for (int i = 0; i < n; i++) sp[spotted[i][c]]++;
    for (int i = 0; i < n; i++) si[simple[i][c]]++;

    if (
      (sp['A'] > 0 && si['A'] > 0) ||
      (sp['G'] > 0 && si['G'] > 0) ||
      (sp['T'] > 0 && si['T'] > 0) ||
      (sp['C'] > 0 && si['C'] > 0) ||

      (si['A'] > 0 && sp['A'] > 0) ||
      (si['G'] > 0 && sp['G'] > 0) ||
      (si['T'] > 0 && sp['T'] > 0) ||
      (si['C'] > 0 && sp['C'] > 0)
    ) {
      continue;
    }
    counter++;
  }

  cout << counter << endl;
  return 0;
}