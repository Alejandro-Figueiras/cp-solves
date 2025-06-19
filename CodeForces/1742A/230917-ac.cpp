#include <stdio.h>
int  main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf((a + b == c || b + c == a || a + c == b) ? "YES\n" : "NO\n");
  }

  return 0;
}
