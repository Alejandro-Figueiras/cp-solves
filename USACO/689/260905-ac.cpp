#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  freopen("cowtip.in", "r", stdin);
  freopen("cowtip.out", "w", stdout);
  int n; cin >> n;
  int cows[n][n];

  rep(i, 0, n) {
    string s; cin >> s;
    rep(j, 0, n) cows[j][i] = (int)(s[j] - '0');
  }
  int ops = 0;
  int opI[n] = { 0 };
  for (int j = n - 1; j >= 0; j--) {
    for (int i = n - 1; i >= 0; i--) {
      if ((cows[i][j] + opI[i]) % 2) { rep(k, 0, i + 1) opI[k]++; ops++; }
    }

  }

  cout << ops << endl;

  return 0;
}