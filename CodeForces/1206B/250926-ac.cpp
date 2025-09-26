#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long coins = 0, parity = 0;
  bool hayCero = false;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x > 0) {
      coins += abs(1 - x);
    } else if (x < 0) {
      coins += abs(-1 - x);
      parity++;
    } else {
      hayCero = true;
      coins++;
    }
  }
  if (!hayCero && parity % 2 == 1)
    coins += 2;
  cout << coins << endl;

  return 0;
}