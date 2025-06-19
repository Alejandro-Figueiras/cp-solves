#include <stdio.h>
#include <math.h>

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

int indice(int A[], int Auses[], int N, int a, int k, bool dir = false) {
  if (A[a] == k) {
    if (Auses[a] == false) {
      return a;
    } else {
      if (a < N) {
        int q = -1;
        for (int i = a + 1; i < N;i++) {

          if (A[i] == k) {
            if (Auses[i] == false) {
              q = i;
              break;
            }
          } else break;
        }
        if (q == -1) {
          for (int i = a - 1; i >= 0;i--) {
            if (A[i] == k) {
              if (Auses[i] == false) {
                q = i;
                break;
              }
            } else break;
          }
        }
        return q;
      } else {
        return -1;
      }
    }
  } else {
    return -1;
  }
}

int main() {
  int N, M;
  scanf("%d %d", &N, &M);

  int A[N];
  int Auses[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
    Auses[i] = false;
  }
  quickSort(A, 0, N - 1);


  bool todoBien = true;
  for (int i = 0; i < M; i++) {
    int k;
    scanf("%d", &k);

    int a = -1, b = N;
    while (abs(a - b) != 1) {
      int c = (a + b) / 2;
      if (A[c] <= k)
        a = c;
      else
        b = c;
    }


    int index = indice(A, Auses, N, a, k);
    if (index != -1) {
      Auses[index] = true;
    } else {
      todoBien = false;
      printf("No\n");
      break;
    }
  }

  if (todoBien) printf("Yes\n");

  return 0;
}