#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int first_true(int lo, int hi,
  function<bool(int)> f) {
  hi++;
  while (lo < hi) {
    int mid = lo + (hi - lo) / 2;
    if (f(mid)) {
      hi = mid;
    } else {
      lo = mid + 1;
    }
  }
  return lo;
}
int n;
int f(int x) {
  int cont = 0;
  rep(i,1,n+1) {
    int k = x/i;
    cont += min(k,n);
  }

  return cont >= (n*n + 1)/2;
}

int main() {
  cin >> n;

  cout << first_true(1,2e9, f) << endl;

  return 0;
}