#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int p, n; scanf("%d %d", &p, &n);
  int niv = ceil(sqrt(n));
  if (p == 1) {
    printf("%d\n",
      (int)(pow(niv, 2) - n));
  } else {
    char w[n];
    for (int i = 0; i < n; i++)
      cin >> w[i];
    if (p == 2) {
      for (int i = 0;i < niv;i++) {
        printf(i == niv - 1 ? "%c\n" : "%c ", w[(int)(pow(i, 2))]);
      }
    } else {
      for (int a = 0;a <= 2 * (niv - 1);a += 2) {
        int c = niv;
        for (int b = a; b >= 0; b--) {
          if (b % 2 == 0) c--;
          int index = (int)pow(c, 2) + b;
          if (index < n) printf((b == 0) ? "%c\n" : "%c ", w[index]);
        }
      }
    }
  }
}