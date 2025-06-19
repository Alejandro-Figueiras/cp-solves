#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n; scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++) {
      int a; scanf("%d", &a); num[i] = a;
    }

    bool nosepudo = false;
    for (int i = n - 1; i >= 0; i--) {
      if (num[i] < num[n - 1]) {
        swap(num[i], num[n - 1]);
        sort(num + i, num + n);
        break;
      }
      if (num[i] > num[i - 1]) {
        swap(num[i], num[i - 1]);
        sort(num + i, num + n);
        break;
      }
      if (i == 0) nosepudo = true;
    }
    if (nosepudo) {
      printf("-1\n");
      continue;
    }
    for (int i = 0; i < n; i++) {
      printf("%d", num[i]);
    }
    printf("\n");
  }
  return 0;
}
