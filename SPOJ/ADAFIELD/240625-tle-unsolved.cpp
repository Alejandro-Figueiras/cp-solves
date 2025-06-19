#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, m, q;
    cin >> n >> m >> q;

    set<ll> vertical, horizontal;
    multiset<ll> segV, segH;

    vertical.insert(0); vertical.insert(n);
    horizontal.insert(0); horizontal.insert(m);
    segV.insert(n);
    segH.insert(m);

    for (int w = 0; w < q; w++) {
      ll eje, punto; cin >> eje >> punto;

      if (eje == 0) { // verticales
        if (!vertical.count(punto)) {
          auto it = vertical.lower_bound(punto);
          auto itAux = it;
          itAux--;

          segV.erase(segV.find(*it - *itAux));
          segV.insert(punto - *itAux);
          segV.insert(*it - punto);
          vertical.insert(punto);
        }
      } else { // horizontales
        if (!horizontal.count(punto)) {
          auto it = horizontal.lower_bound(punto);
          auto itAux = it;
          itAux--;

          segH.erase(segH.find(*it - *itAux));
          segH.insert(punto - *itAux);
          segH.insert(*it - punto);
          horizontal.insert(punto);
        }
      }
      auto a = segV.end(); a--;
      auto b = segH.end(); b--;
      cout << *a * *b << endl;
    }
  }

  return 0;
}
