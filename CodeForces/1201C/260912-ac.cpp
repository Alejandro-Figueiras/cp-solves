#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n, k; cin >> n >> k;
  int a[n+1]; rep(i, 0, n) cin >> a[i];
  a[n]=2000000000;
  sort(a, a + n);

  int medI = n / 2;
  int medV = a[medI];
  int cont = k;
  int cant = 1;

  rep(i, medI + 1, n+1) {
    do {
      if (a[i] > medV) {
        cont -= cant;
        if (cont < 0) break;
        medV++;
      }
    } while (a[i] > medV);
    cant++;
    if (cont < 0) break;
  }

  cout << medV << endl;



  return 0;
}