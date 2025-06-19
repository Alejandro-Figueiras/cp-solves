#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, a, n; scanf("%d %d %d", &p, &a, &n);
  int num[n];
  for (int i = 0; i < n; i++) {
    int k; scanf("%d", &k);
    num[i] = k;
  }

  if (p == 1) {
    bool bien = false;
    int j;
    for (int i = n - 1; i >= 0; i--) {
      for (j = i - 1; j >= 0; j--) {
        if (num[i] < num[j]) {
          swap(num[i], num[j]);
          bien = true;
          break;
        }
      }
      if (bien) break;
    }
    sort(num + j + 1, num + n, greater<>());
    for (int i = 0; i < n; i++) {
      printf("%d", num[i]);
    }
    printf("\n");
  } else {
    int numCifras = (a > 99) ? 3 : 2;
    int cifras[numCifras];
    for (int cifra = 1; cifra <= numCifras; cifra++) {
      cifras[numCifras - cifra] = (a % ((int)pow(10, cifra))) / ((int)pow(10, cifra - 1));
    }

    int counters[numCifras + 1] = { 0 };
    counters[numCifras] = 1;
    // Complejidad 3n
    for (int i = n - 1; i >= 0; i--) {
      for (int c = 0; c < numCifras; c++) { // MAXIMO 3 ITERACIONES
        if (num[i] == cifras[c]) counters[c] += counters[c + 1];
      }
    }

    printf("%d\n", counters[0]);
  }

}