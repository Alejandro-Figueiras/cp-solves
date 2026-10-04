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
  string mat[n];
  ll unos = 0;
  rep(i, 0, n) {
    cin >> mat[i];
    rep(j, 0, n) if (mat[i][j] == '1') unos++;
  }

  char comp = (unos == (n * n) / 2) ? mat[0][0] : 
              (unos > (n * n) / 2) ? '1' : '0';

  rep(i, 0, n) {
    rep(j, 0, n) {
    if (mat[i][j] == comp) {
      cout << '*';
    } else {
      cout << 'o';
    }
  }
    cout << endl;
  }

  return 0;
}