#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  for (int z = 0; z < t; z++) {
    int orbitas[101] = { 0 }; // <-- cantidad de planetas que tiene la orbita
    int n, c;
    cin >> n >> c;

    for (int i = 0; i < n; i++) {
      int a; cin >> a;
      orbitas[a]++;
    }
    int coste = 0;
    for (int i = 1; i <= 100; i++) {
      if (orbitas[i] < c) {
        coste += orbitas[i];
      } else {
        coste += c;
      }
    }
    cout << coste << endl;
  }

  return 0;
}
