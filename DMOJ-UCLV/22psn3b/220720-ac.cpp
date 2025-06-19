#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int MCD(int a, int b) {

  if (b == 0) return a;

  return MCD(b, a % b);
}

int main() {
  int n; scanf("%d", &n);
  for (int c = 0; c < n; c++) {
    string s, d; cin >> s >> d;
    int dif = -1, a = -1;
    int m = s.size();

    // diferencias
    for (int i = 0; i < m; i++) {
      if (s[i] != d[(a == -1) ? i : i - 1] || (i == m - 1 && a == -1)) {
        if (a != -1) {
          dif = 0;
          break;
        }
        dif = 1; a = i;
      }
    }

    // calculo de probabilidad
    if (dif == 0) {
      printf("0/1\n");
      continue;
    }

    // aumento
    for (int i = a - 1; i >= 0;i--) {
      if (s[i] == s[a]) {
        dif++;
      } else {
        break;
      }
    }

    int div = MCD(m, dif);
    printf("%d/%d\n", (dif / div), (m / div));
  }
}