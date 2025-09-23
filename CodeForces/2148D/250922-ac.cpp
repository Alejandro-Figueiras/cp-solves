#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    multiset<int> pares, impares;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (x%2==0) {
        pares.insert(x);
      } else impares.insert(x);
    }
    ll count = 0;
    while (impares.size()) {
      auto k = --impares.end();
      count+= *k;
      impares.erase(k);

      for (int x: pares) count+=x;
      pares.clear();

      if (!impares.empty()) 
        impares.erase(impares.begin());
    }
    cout << count << endl;
  }
  return 0;
}