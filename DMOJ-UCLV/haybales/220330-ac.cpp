#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int suma = 0;
  int nums[n];
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    suma += a;
    nums[i] = a;
  }

  int prom = suma / n;
  int movimientos = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] < prom) {
      movimientos += prom - nums[i];
    }
  }
  printf("%d\n", movimientos);
  return 0;
}