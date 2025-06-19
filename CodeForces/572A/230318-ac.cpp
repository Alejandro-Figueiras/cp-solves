#include <iostream>
using namespace std;
int main() {
  int p, q, k, m;
  scanf("%d %d %d %d", &p, &q, &k, &m);
  bool ax = true;
  for (int i = 0; i < p; i++) {
    int w; scanf("%d", &w);
    if (i == k - 1 && ax) {
      k = w;
      ax = false;
    }
  }
  for (int i = 0; i < q; i++) {
    int w; scanf("%d", &w);
    if (i == q - m) {
      m = w;
      break;
    }
  }
  printf(k < m ? "YES\n" : "NO\n");
  return 0;
}