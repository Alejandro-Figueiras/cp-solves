#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n; scanf("%d", &n);
    int k = 1;
    int ab = 0, an = 0, bb = 0, bn = 0;
    for (;k * (k + 1) / 2 <= n;k++) {
      if (k % 4 <= 1) {//alice
        if (k % 2 == 0) {
          ab += k / 2;
          an += k / 2;
        } else {
          ab += k / 2;
          an += k / 2;
          if (((k * (k - 1) / 2) + 1) % 2 == 0) {
            an++;
          } else {
            ab++;
          }
        }
      } else {//bob
        if (k % 2 == 0) {
          bb += k / 2;
          bn += k / 2;
        } else {
          bb += k / 2;
          bn += k / 2;
          if (((k * (k - 1) / 2) + 1) % 2 == 0) {
            bn++;
          } else {
            bb++;
          }
        }
      }
    }
    int rest = n - (k * (k - 1) / 2);
    //mismo paquete de arriba
    if (k % 4 <= 1) {//alice
      if (rest % 2 == 0) {
        ab += rest / 2;
        an += rest / 2;
      } else {
        ab += rest / 2;
        an += rest / 2;
        if (((k * (k - 1) / 2) + 1) % 2 == 0) {
          an++;
        } else {
          ab++;
        }
      }
    } else {//bob
      if (rest % 2 == 0) {
        bb += rest / 2;
        bn += rest / 2;
      } else {
        bb += rest / 2;
        bn += rest / 2;
        if (((k * (k - 1) / 2) + 1) % 2 == 0) {
          bn++;
        } else {
          bb++;
        }
      }
    }

    printf("%d %d %d %d\n", ab, an, bb, bn);
  }
}