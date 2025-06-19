#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int comp(int a, int b) {
  return a > b;
}

int main() {
  int n;
  vector<int> varitas, cajas;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    varitas.push_back(k);
  }

  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    cajas.push_back(k);
  }

  sort(varitas.begin(), varitas.end(), comp);
  sort(cajas.begin(), cajas.end(), comp);

  bool condicion = false;
  for (int i = 0; i < n; i++) {
    if (varitas[n] > cajas[n]) {
      condicion = true;
      printf("NE\n");
      break;
    }
  }
  if (!condicion)
    printf("DA\n");

  return 0;

}