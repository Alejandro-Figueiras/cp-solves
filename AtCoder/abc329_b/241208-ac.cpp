#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  set<int> valores;
  for (int i = 0; i < n; i++) {
    int a; cin >> a; valores.insert(a);
  }
  auto it = valores.end();
  it--;it--;
  int res = *it;
  cout << res << endl;
  return 0;
}
