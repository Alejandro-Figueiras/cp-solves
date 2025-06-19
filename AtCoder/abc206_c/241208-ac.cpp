#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  unordered_map<int, int> contadores;

  long long suma = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    suma += i - contadores[a];
    contadores[a]++;
  }
  cout << suma << endl;
  return 0;
}
