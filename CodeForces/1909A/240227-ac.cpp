#include <iostream>

using namespace std;

int main() {
  // Casos de Prueba
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    // ---- EN CADA CASO DE PRUEBA ----

    // numero de puntos especiales
    int n; cin >> n;

    // declaramos los hemisferios
    bool sup = false, inf = false, occ = false, ori = false;

    for (int i = 0; i < n; i++) {
      // coordenadas del punto
      int x, y; cin >> x >> y;

      // comprobamos si esta se encuentra en algun hemisferio en desuso
      if (!sup && y < 0) sup = true;
      if (!inf && y > 0) inf = true;
      if (!occ && x < 0) occ = true;
      if (!ori && x > 0) ori = true;
    }

    // comprobamos la cantidad de hemisferios en uso
    int hemisferios = 0;
    if (sup) hemisferios++;
    if (inf) hemisferios++;
    if (occ) hemisferios++;
    if (ori) hemisferios++;

    // Imprimimos el resultado
    if (hemisferios <= 3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
