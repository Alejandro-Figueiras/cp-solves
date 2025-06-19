#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
  while (scanf("%d %d", &n, &k) != EOF) {
    int cant = n;
    while (true) {
      if (n < k) break;
      cant += n / k;
      n = (n / k) + (n % k);
    }
    printf("%d\n", cant);
  };
  return 0;
}
