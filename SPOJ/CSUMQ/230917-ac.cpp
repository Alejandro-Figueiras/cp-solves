#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  int arr[n];
  int a; scanf("%d", &a); arr[0] = a;
  for (int i = 1; i < n; i++) {
    int a; scanf("%d", &a); arr[i] = a + arr[i - 1];
  }
  int q; scanf("%d", &q);
  for (int y = 0; y < q; y++) {
    int i, j; scanf("%d %d", &i, &j);
    printf("%d\n", (i == 0) ? arr[j] : (arr[j] - arr[i - 1]));
  }
  return 0;
}
