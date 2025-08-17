#include <bits/stdc++.h>
using namespace std;

int main() {
  string cadena; cin >> cadena;
  sort(cadena.begin(), cadena.end());
  set<string> perms;
  do {
    perms.insert(cadena);
  } while (next_permutation(cadena.begin(), cadena.end()));

  cout << perms.size() << endl;
  for (auto s: perms) cout << s << endl;
  return 0;
}