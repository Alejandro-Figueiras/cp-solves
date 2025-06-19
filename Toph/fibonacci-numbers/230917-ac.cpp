#include <stdio.h>
int cache[51] = { 0 };
int fibo(int n) {
  if (n == 1 || n == 2) return 1;
  if (n <= 0) return 0;
  if (cache[n] != 0) return cache[n];
  int a = (cache[n - 1] != 0) ? cache[n - 1] : fibo(n - 1);
  int b = cache[n - 2];
  cache[n] = a + b;
  return cache[n];
}
int  main() {
  cache[1] = 1;cache[2] = 1;
  int a; scanf("%d", &a);
  printf("%d\n", fibo(a));
  return 0;
}
