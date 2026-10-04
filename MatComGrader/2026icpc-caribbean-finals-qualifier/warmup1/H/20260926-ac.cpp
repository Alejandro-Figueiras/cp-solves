#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n,m,q; cin >> n >> m >> q;
  int mat[n][m];
  rep(x,0,n) rep(y,0,m) cin >> mat[x][y];

  rep(z,0,q) {
    int t; cin >> t;
    if (t == 1) {
      int r; cin >> r; r--;
      rep(i,0,m/2) swap(mat[r][i], mat[r][m-i-1]);
    } else if (t == 2) {
      int c; cin >> c; c--;
      rep(i,0,n/2) swap(mat[i][c], mat[n-i-1][c]);
    } else {
      int x,y; cin >> x >> y; x--; y--;
      cout << mat[x][y] << endl;
    }
  }

  return 0;
}