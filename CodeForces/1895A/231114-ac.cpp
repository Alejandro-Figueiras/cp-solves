#include <bits/stdc++.h>
using namespace std;

int main() {
  int z; scanf("%d", &z);
  for (int t = 0; t < z; t++) {
    int x, y, k; scanf("%d %d %d", &x, &y, &k);
    if (x > y) {
      printf("%d\n", x);
    } else {
      int chestD = (y - x) - k;
      if (chestD < 0) chestD = 0;
      printf("%d\n", y + chestD);
    }
  }
  return 0;
}
