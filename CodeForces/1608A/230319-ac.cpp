#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n; scanf("%d", &n);
    printf("2");
    int temp = 2; int ult = 2;
    for (int i = 1; i < n; i++) {
      if ((temp + 1) % ult == 0) {
        i--;
        temp++;
        continue;
      }
      printf(" %d", temp + 1);
      ult = temp + 1;
      temp = ult;
    }
    printf("\n");
  }
}