#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);
  
  int capacidad[3];
  int leche[3];
  for (int i = 0; i < 3; i++) {
    cin >> capacidad[i] >> leche[i];
  }

  for (int i = 0; i < 100; i++) {
    int cubo1 = i % 3;
		int cubo2 = (i + 1) % 3;
		int cantidad = min(leche[cubo1], capacidad[cubo2] - leche[cubo2]);
		leche[cubo1] -= cantidad;
		leche[cubo2] += cantidad;
  }

  for (int i = 0; i < 3; i++) {
    cout << leche[i] << endl;
  }

  return 0;
}