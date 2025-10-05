#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void bn(int s, int lo, int hi, int steps) {
  if (lo > hi) return;
  int mid = (lo + hi) / 2;
  int step = steps + 1;
  if (step == s) {
    cout << mid << endl;
  } else {
    bn(s, lo, mid - 1, step);
    bn(s, mid + 1, hi, step);
  }
}

int main() {
  int t; cin >> t;
  while (t--) {
    int n, s; cin >> n >> s;
    bn(s, 0, n - 1, 0);
  }
  return 0;
}