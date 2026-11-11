#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n, m, q; cin >> n >> m >> q;
  int arr[n + 1][m + 1];
  rep(i, 1, n + 1) rep(j, 1, m + 1) cin >> arr[i][j];

  rep(z, 0, q) {
    int t; cin >> t;
    if (t == 1) {
      int r; cin >> r;
      reverse(arr[r] + 1, arr[r] + m + 1);
    } else if (t == 2) {
      int c; cin >> c;
      rep(i, 1, n / 2 + 1) {
        swap(arr[i][c], arr[n - i + 1][c]);
      }
    } else {
      int a, b; cin >> a >> b;
      cout << arr[a][b] << endl;
    }
  }

  return 0;
}