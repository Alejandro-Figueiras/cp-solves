#include <iostream>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n; scanf("%d", &n);
    char a[n]; bool only = true;
    for (int i = 0; i < n; i++) {
      char q; cin >> q;
      a[i] = q;
      if (q != '?') only = false;
      if (i > 0 && a[i] == '?') {
        if (a[i - 1] == 'B') {
          a[i] = 'R';
        } else if (a[i - 1] == 'R') {
          a[i] = 'B';
        }
      }
    }
    if (only) {
      char ant = 'R';
      for (int i = 0; i < n; i++) {
        if (ant == 'B') {
          a[i] = 'R';
        } else if (ant == 'R') {
          a[i] = 'B';
        }
        ant = a[i];
      }
    } else {
      for (int i = 0; i < n; i++) {
        if (a[i] != '?') {
          char ant = a[i];
          for (int j = i - 1; j >= 0; j--) {
            if (ant == 'B') {
              a[j] = 'R';
            } else if (ant == 'R') {
              a[j] = 'B';
            }
            ant = a[j];
          }
          break;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      printf("%c", a[i]);
    }
    printf("\n");
  }
  return 0;
}
