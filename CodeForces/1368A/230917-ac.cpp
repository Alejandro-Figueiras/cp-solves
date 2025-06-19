#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int a, b, n; scanf("%d %d %d", &a, &b, &n);
    int operaciones = 0;
    while (a <= n && b <= n) {
      if (a > b) {
        b += a;
      } else {
        a += b;
      }
      operaciones++;
    }
    printf("%d\n", operaciones);
  }
  return 0;
}
