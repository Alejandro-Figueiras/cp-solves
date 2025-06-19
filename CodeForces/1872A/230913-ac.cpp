#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double cant = abs(a - b);
    c *= 2;
    printf("%d\n", (int)ceil(cant / c));
  }
  return 0;
}
