#include <iostream>
#include <math.h>
using namespace std;

int contar(int n[], int cifras) {
  int k = 1;
  for (int i = 0; i < cifras; i++) {
    k *= n[i];
  }
  return k;
}

int main() {
  int n;
  scanf("%d", &n);
  int cantCifras;
  for (int i = 9; i >= 0; i--) {
    if (n / (int)pow(10, i)) {
      cantCifras = i + 1;
      break;
    }
  }

  int cifras[cantCifras];
  int a = n;
  for (int i = cantCifras - 1; i >= 0; i--) {
    int p = a / (int)pow(10, i);
    cifras[i] = p;
    a -= p * (int)pow(10, i);
  }

  // los q tienen una sola cifra
  if (cantCifras == 1) {
    printf("%d\n", n);
    return 0;
  }

  // los q empiezan x 1
  if (cifras[cantCifras - 1] == 1) {
    printf("%d\n", (int)pow(9, cantCifras - 1));
    return 0;
  }
  int k = 1;
  for (int i = cantCifras - 2; i >= 0; i--) {
    int r[cantCifras]; for (int j = 0; j < cantCifras; j++) r[j] = cifras[j];
    r[i + 1]--;
    for (int j = i; j >= 0; j--) r[j] = 9;
    int caso1 = contar(cifras, cantCifras);
    int caso2 = contar(r, cantCifras);
    if (caso1 > k) k = caso1;
    if (caso2 > k) k = caso2;
  }

  printf("%d", k);

  return 0;
}
