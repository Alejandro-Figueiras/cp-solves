#include <bits/stdc++.h>
using namespace std;

class DisjointSets {
private:
  vector<int> parents;
  vector<int> sizes;

public:
  DisjointSets(int size) : parents(size), sizes(size, 1) {
    for (int i = 0; i < size; i++) { parents[i] = i; }
  }

  /** @return the "representative" node in x's component */
  int find(int x) { return parents[x] == x ? x : (parents[x] = find(parents[x])); }

  /** @return whether the merge changed connectivity */
  bool unite(int x, int y) {
    int x_root = find(x);
    int y_root = find(y);
    if (x_root == y_root) { return false; }

    if (sizes[x_root] < sizes[y_root]) { swap(x_root, y_root); }
    sizes[x_root] += sizes[y_root];
    parents[y_root] = x_root;
    return true;
  }

  /** @return whether x and y are in the same connected component */
  bool connected(int x, int y) { return find(x) == find(y); }

  int getSize(int x) {
    return sizes[find(x)];
  }
};
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    DisjointSets dsu(2 * n + 1);
    map<string, int> indexes;
    int indexCount = 1;
    for (int z = 0; z < n; z++) {
      string a, b; cin >> a >> b;
      int c = indexes[a];
      int d = indexes[b];
      if (c == 0) indexes[a] = c = indexCount++;
      if (d == 0) indexes[b] = d = indexCount++;
      dsu.unite(c, d);
      cout << dsu.getSize(c) << endl;
    }
  }
  return 0;
}