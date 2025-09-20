#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m; cin >> n >> m;
  vector<int> cities = vector(n,0), towers = vector(m,0);
  for (int i=0;i<n;i++) cin >> cities[i];
  for (int i=0;i<m;i++) cin >> towers[i];
  sort(towers.begin(), towers.end());
  int rad = 0;
  for (auto c: cities) {
    auto l = lower_bound(towers.begin(), towers.end(), c);
    auto r = upper_bound(towers.begin(), towers.end(), c);
    if (l == towers.end()) l = towers.begin();
    if (r == towers.end()) r--;
    if (*l > c && l != towers.begin()) l--;
    // cout << c << "-> " << (*l) << " " << (*r) << endl;
    rad=max(rad, 
      min(abs(c-(*r)), abs(c-(*l)))
    );
  }
  cout << rad << endl;

  return 0;
}