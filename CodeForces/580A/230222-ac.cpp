#include <iostream>

using namespace std;

int main() {
  int n, maximo = 1, actual = 0, anterior = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    if (a >= anterior) {
      actual++;
    } else {
      actual = 1;
    }
    anterior = a;
    if (maximo < actual) maximo = actual;
  }
  printf("%d", maximo);
  return 0;
}
