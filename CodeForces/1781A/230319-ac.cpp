#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int w, d, h, a, b, f, g;
    scanf("%d %d %d %d %d %d %d", &w, &d, &h, &a, &b, &f, &g);
    int sum = abs(a - f) + abs(b - g) + h;
    int k = f;
    if (g < k) k = g;
    if (d - g < k) k = d - g;
    if (w - f < k) k = w - f;
    if (a < k) k = a;
    if (b < k) k = b;
    if (d - b < k) k = d - b;
    if (w - a < k) k = w - a;
    sum += k * 2;
    printf("%d\n", sum);
  }
}