#include <stdio.h>

int main() {
  char a;
  scanf("%c", &a);
  int b;
  switch (a) {
  case 'A': b = 5;break;
  case 'B': b = 4;break;
  case 'C': b = 4;break;
  case 'D': b = 3;break;
  case 'E': b = 2;break;
  }
  printf("%d", b);
  return 0;
}