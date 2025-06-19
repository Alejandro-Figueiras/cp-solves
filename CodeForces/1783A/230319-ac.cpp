#include <iostream>
#include <math.h>
using namespace std;

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int pivot(int a[], int first, int last) {
  int p = first;
  int pivotElement = a[first];

  for (int i = first + 1; i <= last; i++) {
    if (a[i] <= pivotElement) {
      p++;
      swap(a[i], a[p]);
    }
  }
  swap(a[p], a[first]);

  return p;
}

void quickSort(int a[], int first, int last) {
  int pivotElement;
  if (first < last) {
    pivotElement = pivot(a, first, last);
    quickSort(a, first, pivotElement - 1);
    quickSort(a, pivotElement + 1, last);
  }
}

int main() {
  int t; scanf("%d", &t);
  for (int z = 0; z < t; z++) {
    int n, p; scanf("%d %d", &n, &p);
    int suma = p;
    bool eq = true, beat = true;
    int a[n]; a[0] = p;
    for (int i = 1; i < n; i++) {
      int k; scanf("%d", &k);
      if (k != a[i - 1]) eq = false;
      if (k == suma) beat = false;
      a[i] = k;
      suma += k;
    }
    if (eq) {
      printf("NO\n");
    } else if (!beat) {
      quickSort(a, 0, n - 1);
      swap(a[n - 2], a[0]);
      printf("YES\n");
      for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", a[i]);
      }
    } else {
      printf("YES\n");
      for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
      }
    }
  }
}