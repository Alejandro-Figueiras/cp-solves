#include <bits/stdc++.h>

using namespace std;

int main() {
  string numC; int k; cin >> numC >> k;
  int n = numC.size();
  int num[n];
  for (int i = 0; i < n; i++) {
    num[i] = ((int)numC[i] - '0');
  }
  for (int i = 0; i < n; i++) {
    int indice = i, valor = num[i];
    for (int j = i + 1; j < min(n, i + k + 1); j++) {
      if (num[j] > valor) {
        valor = num[j];
        indice = j;
      }
    }
    if (indice != i) {
      for (int j = indice; j > i; j--) {
        swap(num[j], num[j - 1]); k--;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << num[i];
  }
  cout << endl;
  return 0;
}