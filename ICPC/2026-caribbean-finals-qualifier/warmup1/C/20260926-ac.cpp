#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n; cin >> n;
  vector<pair<ll,string>> list;
  set<ll> sums;
  map<ll,vector<string>> dict;
  rep(i,0,n) {
    string s; cin >> s;
    ll sum = 0;
    rep(j,0,sz(s)) {
      sum += (int)s[j];
    }
    dict[sum].push_back(s);
    sums.insert(sum);
  }

  for(auto sum: sums) {
    for (auto s: dict[sum]) cout << s << endl;
  }

  return 0;
}