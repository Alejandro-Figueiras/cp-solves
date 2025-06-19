#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf((n % 2 == 0) ? "even\n" : "odd\n");
  return 0;
}