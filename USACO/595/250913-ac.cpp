#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);
  int n, q; cin >> n >> q;

  long long sum[n + 1] = { 0 };
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    sum[i]= x + sum[i-1];
  }

  int maxNum = 0;
  for (int b = n; b >= 1; b--) {
    if (b <= maxNum) break;
    for (int a = 1; a <= b; a++) {
      if (b-a+1 <= maxNum) break;
      long long s = sum[b]-sum[a-1];
      if (s%7==0) {
        maxNum = max(maxNum, b-a+1);
      }
    }
  }

  cout << maxNum << endl;
  return 0;
}