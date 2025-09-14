#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  long long sum[n + 1] = { 0 };
  for (int i = 1; i <= n; i++) {
    long long x; cin >> x;
    sum[i] = sum[i - 1] + x;
  }

  long long maxS = sum[1];
  long long minPrefix = sum[0];
  for (int i = 1; i <= n; i++) {
    maxS = max(maxS, sum[i] - minPrefix);
    minPrefix = min(minPrefix, sum[i]);
  }
  cout << maxS << endl;

  return 0;
}