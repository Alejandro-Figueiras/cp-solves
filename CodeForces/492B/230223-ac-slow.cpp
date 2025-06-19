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
  int n, l;
  scanf("%d %d", &n, &l);
  int linternas[n];
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    linternas[i] = a;
  }
  quickSort(linternas, 0, n - 1);

  double d = max(linternas[0], l - linternas[n - 1]);
  if (d == 0) d = 0.5;
  for (int i = 1; i < n; i++) {
    double k = ((double)(linternas[i] - linternas[i - 1])) / 2;
    if (k == 0) k = 0.5;
    if (k > d) d = k;
  }
  printf("%.10f\n", d);
  return 0;
}