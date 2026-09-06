#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  freopen("herding.in", "r", stdin);
  freopen("herding.out", "w", stdout);
  int cows[3];
  rep(i, 0, 3) cin >> cows[i];
  sort(cows, cows + 3);
  int a = cows[1] - cows[0] - 1;
  int b = cows[2] - cows[1] - 1;

  if (a == 0 && b == 0) {
    cout << 0 << endl;
  } else if (a == 1 || b == 1) {
    cout << 1 << endl;
  } else {
    cout << 2 << endl;
  }

  int maxx = max(a,b);
  cout << maxx << endl;

  return 0;
}