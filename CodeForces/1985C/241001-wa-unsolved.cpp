#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    int n; cin >> n;
    int maximo = 0; int contador = 0; int suma = 0;
    for (int i = 0; i < n; i++) {
      int a; cin >> a;
      maximo = max(maximo, a);
      suma += a;
      if (maximo == suma - maximo) contador++;
    }
    cout << contador << endl;
  }
  return 0;
}
