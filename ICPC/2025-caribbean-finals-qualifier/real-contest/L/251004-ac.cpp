#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int a,b; cin >> a >> b;
    int k;
    if (a != 3 && b != 3) k = 3;
    if (a != 5 && b != 5) k = 5;
    if (a != 6 && b != 6) k = 6;
    cout << k << endl;
  }
  return 0;

  return 0;
}