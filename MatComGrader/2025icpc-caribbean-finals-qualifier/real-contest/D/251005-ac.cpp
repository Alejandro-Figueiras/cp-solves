#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
#define MAXN ((int)1e6)+1
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const ll MOD = 998244353;
vector<ll> fac(MAXN + 1);
vector<ll> inv(MAXN + 1);

void factorial() {
  fac[0] = 1;
  rep(i, 1, MAXN + 1) fac[i] = fac[i - 1] * i % MOD;
}

ll exp(ll x, ll n) {
  x %= MOD;
  ll res = 1;
  while (n > 0) {
    if (n % 2 == 1) {
      res = res * x % MOD;
    }
    x = x * x % MOD;
    n /= 2;
  }
  return res;
}

void inverses() {
  inv[MAXN] = exp(fac[MAXN], MOD - 2);
  for (int i = MAXN; i >= 1; i--) {
    inv[i - 1] = inv[i] * i % MOD;
  }
}

int main() {
  factorial();
  inverses();

  int t; cin >> t;
  while (t--) {
    string s; int q; cin >> s >> q;
    rep(z, 0, q) {
      string info; cin >> info;
      int a, b; cin >> a >> b; a--; b--;
      unordered_map<char, int> perm(26);
      rep(i, a, b + 1) perm[s[i]]++;

      if (info == "INSIDE") {
        string c; cin >> c;
        int sizeC = sz(c);
        assert(sizeC == b - a + 1);
        rep(i, 0, sizeC) {
          perm[c[i]]--;
          if (perm[c[i]] < 0) break;
        }
        bool flag = true;
        for (auto x : perm) {
          if (x.second != 0) { flag = false; break; }
        }
        cout << (flag ? "YES" : "NO") << endl;
      } else {
        ll cont = 1;
        for (auto x : perm) {
          if (x.second > 1)
            cont = (cont * inv[x.second]) % MOD;
        }
        ll f = (fac[b - a + 1] * cont) % MOD;
        cout << setprecision(15) << f << endl;
      }
    }
  }
  return 0;
}