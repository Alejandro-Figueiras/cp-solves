#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);

  int n; cin >> n;
  string type[n]; int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> type[i] >> a[i] >> b[i];
  }

  
  int minimo = 0; int maximo = 99999;
  for (int i = n-1; i >= 0; i--) {
    if (type[i] == "on") {
      minimo-= b[i];
      maximo-= a[i];
      minimo = max(0, minimo);
      maximo = max(0, maximo);
    }
    if (type[i] == "off") {
      minimo+= a[i];
      maximo+= b[i];
    }
    if (type[i] == "none") {
      minimo = max(a[i], minimo);
      maximo = min(b[i], maximo);
    }
  }

  cout << minimo << ' ' << maximo << endl;

  minimo = 0; maximo = 99999;
  for (int i = 0; i < n; i++) {
    if (type[i] == "on") {
      minimo+= a[i];
      maximo+= b[i];
    }
    if (type[i] == "off") {
      minimo-= b[i];
      maximo-= a[i];
      minimo = max(0, minimo);
      maximo = max(0, maximo);
    }
    if (type[i] == "none") {
      minimo = max(a[i], minimo);
      maximo = min(b[i], maximo);
    }
  }

  cout << minimo << ' ' << maximo << endl;


  return 0;
}