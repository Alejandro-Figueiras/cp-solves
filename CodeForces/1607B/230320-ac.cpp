#include <iostream>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    long long x, n; scanf("%lld %lld", &x, &n);
    long long i = ((n / 4) * 4) + 1;
    for (; i <= n; i++) {
      if (x % 2 == 0) {
        x -= i;
      } else {
        x += i;
      }
    }
    printf("%lld\n", x);
  }
  return 0;
}
