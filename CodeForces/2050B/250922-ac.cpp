#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    ll sumaPar = 0, sumaImpar = 0;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (i % 2 == 0) {
        sumaPar += x;
      } else {
        sumaImpar += x;
      }
    }


    double promedioPar = sumaPar / ((double)ceil(n / 2.0));
    double promedioImpar = sumaImpar / ((double) floor(n/2.0));

    if (
      ((int)promedioPar) == promedioPar &&
      ((int)promedioImpar) == promedioImpar &&
      promedioImpar == promedioPar
      ) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  return 0;
}