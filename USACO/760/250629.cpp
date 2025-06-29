#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
  int n; cin >> n;
  int shuffles[n];
  for (int i = 0; i < n; i++) {
    cin >> shuffles[i];
  }

  string cows[n];
  for (int i = 0; i < n; i++) {
    cin >> cows[i];
  }

  for (int j = 0; j < 3; j++) {
    string copia[n];
    for (int i = 0; i < n; i++) copia[i] = cows[i];
    for (int i = n-1; i >= 0; i--) {
      cows[i] = copia[shuffles[i]-1];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << cows[i] << endl;
  }

  return 0;
}