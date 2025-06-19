#include <iostream>
#include <math.h>
using namespace std;

int factMod(int n, int m) {
  int f = 1;
  for (int i = 2; i <= n; i++) {
    f = (f * i % m) % m;
    if (f == 0) break;
  }
  return f;
}

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int k; scanf("%d", &k);
    int x = -1;
    for (int i = k - 1; i > 0; i--) {
      int c = (x + 1) % k;
      if (c == 0) {
        x = i; break;
      }
      int b = (c * factMod(i, k)) % k;
      if (b == 0) {
        x = i; break;
      }
    }
    printf("%d\n", x);
  }
}