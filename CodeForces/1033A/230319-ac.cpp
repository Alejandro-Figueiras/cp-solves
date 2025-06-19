#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n, kx, ky, qx, qy, tx, ty;
  scanf("%d %d %d %d %d %d %d",
    &n, &qx, &qy, &kx, &ky, &tx, &ty);
  bool possible = true;
  if ((ky < qy && ty > qy) || (ky > qy && ty < qy)) {
    possible = false;
  }
  if ((kx < qx && tx > qx) || (kx > qx && tx < qx)) {
    possible = false;
  }
  printf(possible ? "YES" : "NO");
  return 0;
}