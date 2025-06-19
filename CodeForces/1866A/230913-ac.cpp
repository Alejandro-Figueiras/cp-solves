#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int mx = 1000000;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    mx = min(mx, abs(a));
  }
  cout << mx << endl;
  return 0;
}
