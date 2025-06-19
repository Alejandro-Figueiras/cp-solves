#include <stdio.h>

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  int dias[n];
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    dias[i] = a;
  }
  for (int i = 0; i < q; i++) {
    int s, e;
    scanf("%d %d", &s, &e);
    s--;
    e--;
    int res = 0;
    for (int k = s; k <= e; k++) {
      res += dias[k];
    }
    printf("%d\n", res);
  }
  return 0;
}