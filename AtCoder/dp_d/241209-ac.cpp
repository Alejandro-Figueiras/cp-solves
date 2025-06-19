#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, W; cin >> n >> W;
  long long w[n], v[n], f[W + 1] = { 0 };
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    w[i] = a; v[i] = b;
  }

  for (int i = 0; i < n; i++)
    for (int j = W; j >= w[i]; j--)
      f[j] = max(f[j], f[j - w[i]] + v[i]);

  cout << f[W] << endl;

  return 0;
}
