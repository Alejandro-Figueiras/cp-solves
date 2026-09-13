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
    int n; cin >> n;
    int sum[n + 1] = { 0 };
    string s; cin >> s;
    map<int,ll> freq;
    rep(i, 1, n + 1) {
      int k = ((int)s[i - 1] - '0');
      sum[i] = sum[i - 1] + k;
    }
    rep(i,0,n+1) freq[sum[i]-i]++;

    ll ans = 0;
    for (auto x: freq) {
      ans += x.second*(x.second-1)/2;
    }
    cout << ans << endl;
  }
  return 0;
}