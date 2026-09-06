#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  ll n, k; cin >> n >> k;
  ll dias[n];
  rep(i, 0, n) {
    cin >> dias[i];
  }

  ll total = k + 1;
  rep(i, 1, n) {
    ll diff = dias[i] - dias[i - 1];
    if (diff > k) {
      total += k + 1;
    } else {
      total += diff;
    }
  }
  cout << total << endl;
  return 0;
}