#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int d;
  scanf("%d", &d);
  for (int x = 0; x < d; x++) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int k = a * b;
    int p = c * d;
    printf("%d\n", (k > p) ? k : p);
  }
  return 0;
}