#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("outofplace.in", "r", stdin);
  freopen("outofplace.out", "w", stdout);
  
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b(a);
  sort(b.begin(), b.end());
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i]!=b[i]) count++;
  }

  cout << count - 1 << endl;

  return 0;
}