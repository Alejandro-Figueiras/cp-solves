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
    int n, m, k; cin >> n >> m >> k;
    k++;
    ll arr[n + 1][m + 1];
    ll psum[n + 1][m + 1];
    ll count = 0;
    bool singleRoom = false;
    rep(i, 0, n + 1) rep(j, 0, m + 1) {
      if (i ==0 || j ==0) {
        arr[i][j] = psum[i][j] = 0;
        continue;
      }
      cin >> arr[i][j];
      count += arr[i][j];
      if (arr[i][j] >= k) {
        singleRoom = true;
      }
      psum[i][j] =
        psum[i - 1][j]
        + psum[i][j - 1]
        - psum[i - 1][j - 1]
        + arr[i][j];
    }

    if (singleRoom) {
      cout << 0 << endl<<endl;
      continue;
    }
    if (count < k) {
      cout << -1 << endl<<endl;
      continue;
    }

    int lo = 0, hi = 2e9;

    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;

      // existe una habitacion tal que dada la distancia mid, 
      // se pueden meter los k personas

      bool flag = false;
      rep(i, 1, n + 1) {
        rep(j, 1, m + 1) {
          if (arr[i][j] == 0) continue;

          int a = max(1, i - mid), A = min(n, i + mid);
          int b = max(1, j - mid), B = min(m, j + mid);
          ll cant = psum[A][B] - psum[a - 1][B] - psum[A][b - 1] + psum[a - 1][b - 1];
          if (cant >= k) {
            flag = true; break;
          }
        }
        if (flag)break;
      }

      if (flag) {
        hi = mid;
      } else {
        lo = mid + 1;
      }
    }


    cout << lo << endl<<endl;

  }
  return 0;
}