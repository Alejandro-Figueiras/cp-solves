#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    if (a > 10) {
      total += a - 10;
    }
  }
  printf("%d\n", total);
  return 0;
}