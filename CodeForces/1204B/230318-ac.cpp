#include <iostream>
#include <math.h>
using namespace std;

void swap(int& a, int& b) {
  int temp = a; a = b; b = temp;
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
  int n; scanf("%d", &n);
  for (int caso = 0; caso < n; caso++) {
    int a[4];
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    quickSort(a, 0, 3);
    printf("%d\n", a[0] * a[2]);
  }
  return 0;
}