// recreated - AC
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  ll x, y; cin >> x >> y;
  ll a = x / 2;
  if (a * 2 == x) {
    a--;
  }
  ll c = y / 2;
  if (c * 2 == y) {
    c--;
  }

  if (a * (y - c) == c * (x - a)) {
    if (a > c) {
      a--;
    } else {
      c--;
    }
  }

  if (a == 0 || c == 0) {
    cout << "*" << endl;
    return 0;
  }

  cout << a << " " << c << endl;
  return 0;
}