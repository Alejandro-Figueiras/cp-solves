#include <bits/stdc++.h>

using namespace std;

int main() {
  int fuerza, n;
  cin >> fuerza >> n;
  pair<int, int> dragones[n];

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    dragones[i] = make_pair(x, y);
  }

  sort(dragones, dragones + n);

  bool esUnCrack = true;
  for (int i = 0; i < n; i++) {
    if (fuerza > dragones[i].first) {
      fuerza += dragones[i].second;
    } else {
      esUnCrack = false;
      break;
    }
  }

  cout << (esUnCrack ? "YES" : "NO") << endl;

  return 0;
}
