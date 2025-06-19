#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n, k; scanf("%d %d", &n, &k);
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      int q; scanf("%d", &q);
      a[i] = q;
    }
    for (int i = 0; i < n; i++) {
      int q; scanf("%d", &q);
      b[i] = q;
    }

    sort(a, a + n); sort(b, b + n);
    int pos = 0;
    while (pos < k) {
      if (a[pos] < b[n - pos - 1]) {
        pos++;
      } else break;
    }
    int suma = 0;
    for (int i = 0; i < pos; i++) suma += b[n - i - 1];
    for (int i = pos; i < n; i++) suma += a[i];
    printf("%d\n", suma);

  }
  return 0;
}
