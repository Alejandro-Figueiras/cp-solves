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
  ll k = n/5;
  ll q = n%5;
  ll z = 0, x = 1;
  rep(w,0,q) {
    z+=x;x+=2;
  }
  ll res = k*25+z;
  cout << res << endl;
  return 0;
}