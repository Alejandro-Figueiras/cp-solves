#include <bits/stdc++.h>
using namespace std;

int nodes; // source: lugar de salida
int pos[1010][1010];
int D[1010]; // Best Path Cost (path: camino)
char S[1010] = { 0 };
void dijkstra(int source_node) {
  for (int i = 1; i <= nodes; i++)
    D[i] = pos[source_node][i];
  D[source_node] = 0;
  int k;
  for (int i = 1; i <= nodes; i++) {
    for (int j = 1; j <= nodes; j++) {
      if (S[j] != 1) { k = j; break; }
    }
    for (int j = source_node + 1; j <= nodes; j++)
      if (S[j] != 1 && (D[j] < D[k])) k = j;
    S[k] = 1;
    for (int j = 1; j <= nodes; j++)
      if (S[j] != 1 && (D[k] + pos[k][j] < D[j]))
        D[j] = D[k] + pos[k][j];
  }
}

int main() {
  int casosPrueba; scanf("%d", &casosPrueba);
  for (int z = 0; z < casosPrueba; z++) {
    int largo, ancho; scanf("%d %d", &largo, &ancho);
    nodes = largo * ancho;

    for (int i = 0; i < 1010; i++) {
      for (int j = 0; j < 1010; j++)
        pos[i][j] = 100;
      S[i] = 0;
    }

    for (int l = 1; l <= largo; l++) {
      for (int an = 1; an <= ancho; an++) {
        int p; scanf("%d", &p);
        int nodo = (l - 1) * ancho + an;
        if (l != 1) pos[nodo - ancho][nodo] = p;
        if (l != largo) pos[nodo + ancho][nodo] = p;
        if (an != 1) pos[nodo - 1][nodo] = p;
        if (an != ancho) pos[nodo + 1][nodo] = p;
      }
    }
    dijkstra(1);
    printf("%d\n", D[(largo - 1) * ancho + ancho]);
  }
  return 0;
}
