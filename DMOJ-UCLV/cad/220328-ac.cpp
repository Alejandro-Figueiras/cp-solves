#include <stdio.h>

int main() {
  char cad[100001];
  for (int i = 0; i < 100001; i++) cad[i] = '0';

  scanf("%s", cad);
  int total = 0, cache = 0;
  for (int i = 0; i < 100001; i++) {
    if (cad[i] == 'a' ||
      cad[i] == 'e' ||
      cad[i] == 'i' ||
      cad[i] == 'o' ||
      cad[i] == 'u') {
      cache++;
      if (cache > total) total = cache;
    } else {
      cache = 0;
    }

    if (cad[i] == '0') {
      printf("%d\n", total);
      return 0;
    }
  }

  return 0;
}