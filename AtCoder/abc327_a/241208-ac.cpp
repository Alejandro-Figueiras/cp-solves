#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  char a[n]; cin >> a;
  bool flag = false;
  for (int i = 1; i < n; i++) {
    if ((a[i] == 'a' && a[i - 1] == 'b') || a[i] == 'b' && a[i - 1] == 'a') {
      flag = true; break;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}
