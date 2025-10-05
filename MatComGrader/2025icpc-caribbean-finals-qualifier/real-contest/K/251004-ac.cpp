#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int t; cin >> t;
  while (t--) {
    int q; cin >> q;
    vector<array<ll, 3>> points;
    multiset<ll> X, Y, Z;
    rep(zzzz, 0, q) {
      string operation; cin >> operation;
      if (operation == "ADD") {
        ll x, y, z; cin >> x >> y >> z;
        points.push_back({ x,y,z });
        X.insert(x);
        Y.insert(y);
        Z.insert(z);
      } else {
        int k; cin >> k;
        auto p = points[k - 1];
        X.erase(X.find(p[0]));
        Y.erase(Y.find(p[1]));
        Z.erase(Z.find(p[2]));
      }

      ll x1 = 0, x2 = 0, y1 = 0, y2 = 0, z1 = 0, z2 = 0;
      if (X.begin() != X.end()) {
        x1 = *X.begin();
        x2 = *(--X.end());
      }
      if (Y.begin() != Y.end()) {
        y1 = *Y.begin();
        y2 = *(--Y.end());
      }
      if (Z.begin() != Z.end()) {
        z1 = *Z.begin();
        z2 = *(--Z.end());
      }
      ll area = 2 * (abs(x1 - x2) * abs(y1 - y2)) +
        2 * (abs(z1 - z2) * (abs(x1 - x2) + abs(y1 - y2)));
      cout << area << endl;
    }
  }
  return 0;
}