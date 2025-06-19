#include <iostream>
using namespace std;

int main() {
  int n, a, b = -1, p = 1, v = 0;
  scanf("%d %d", &n, &a);
  bool win = false;
  for (int i = 1; i < n; i++) {
    int k; scanf("%d", &k);
    if (k == a) {
      p++;
    } else if (k == b) {
      v++;
    } else if (b == -1) {
      b = k; v++;
      win = true;
    } else {
      win = false;
      break;
    }
  }
  if (win && p == v) {
    printf("YES\n");
    printf("%d %d", a, b);
  } else {
    printf("NO");
  }
  return 0;
}