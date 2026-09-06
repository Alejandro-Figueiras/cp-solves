#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (d < a || b < c) {
    cout << b - a + d - c << endl; // ok
  } else if (a <= c && d <= b) {
    cout << b - a << endl;
  } else if (c <= a && b <= d) {
    cout << d - c << endl;
  } else if (a < c && d > b) {
    cout << d - a << endl;
  } else {
    cout << b - c << endl;
  }

  return 0;
}