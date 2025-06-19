#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n; scanf("%d", &n);
    int suma = 0, mx = 0;
    int mejorResultado = 0;
    for (int i = 1; i < n; i++) {
      int sumaAlt = suma, mxAlt = mx;
      int nAlt = n;
      for (int j = i; j <= n; j++) {
        int v = (nAlt--) * j;
        sumaAlt += v;
        if (v > mxAlt) mxAlt = v;
      }
      int resAlt = sumaAlt - mxAlt;
      if (resAlt > mejorResultado) mejorResultado = resAlt;

      suma += (i * i);
      mx = i * i;
    }
    printf("%d\n", mejorResultado);
  }

  return 0;
}
