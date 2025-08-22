#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  int n; cin >> n;
  string s; cin >> s;

  set<string> substrs;
  for (int l = 1; l <= n; l++) {
    for (int i = 0; i < n-l+1; i++) {
      string z = "";
      for (int j = i; j < i+l;j++) z+=s[j];
      substrs.insert(z);
    }
    if (substrs.size() == n-l+1) {
      cout << l << endl;
      break;
    }
    substrs.clear();
  }
  
  return 0;
}