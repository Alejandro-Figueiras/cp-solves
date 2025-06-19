#include <iostream>

using namespace std;

int find_set(int parent[], int v) {
  if (v == parent[v])
    return v;
  return find_set(parent, parent[v]);
}

int main() {
  int n, m, s;
  scanf("%d %d %d", &n, &m, &s);
  int parents[n + 1];

  int grafos = n;
  for (int i = 1; i <= n; i++) {
    parents[i] = i;
  }

  for (int z = 0; z < m; z++) {
    int uI, vI;
    scanf("%d %d", &uI, &vI);


    // Union
    int u = find_set(parents, uI);
    int v = find_set(parents, vI);

    if (v == s) continue;
    if (u != v) {
      parents[v] = u;
      if (v == vI)
        grafos--;
    }

  }

  cout << grafos - 1 << endl;

  return 0;
}