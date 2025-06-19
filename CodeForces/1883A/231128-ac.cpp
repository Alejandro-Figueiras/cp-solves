#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int code; scanf("%d", &code);
    int a[4] = {
        code / 1000,
        (code % 1000) / 100,
        (code % 100) / 10,
        code % 10
    };
    for (int i = 0; i < 4; i++) {
      if (a[i] == 0) a[i] = 10;
    }

    int res = 4 + (a[0] - 1) + abs(a[1] - a[0]) + abs(a[2] - a[1]) + abs(a[3] - a[2]);
    printf("%d\n", res);
  }

  return 0;
}
