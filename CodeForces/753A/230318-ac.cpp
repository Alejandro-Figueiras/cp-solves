#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n; scanf("%d", &n); int k = n;
  int suma = 0, i = 1;
  for (;i <= k;i++) {
    suma += i;
    k -= i;
  }
  i--; printf("%d\n", i);
  for (int j = 1; j < i; j++)
    printf("%d\n", j);
  printf("%d\n", n - suma + i);
  return 0;
}