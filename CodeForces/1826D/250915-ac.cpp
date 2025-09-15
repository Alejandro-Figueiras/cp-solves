#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long arr[n + 1] = { 0 };
    vector<long long> prefix(n + 2, -1e3);
    vector<long long> suffix(n + 2, -1e9);
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
      prefix[i] = max(prefix[i - 1], (arr[i] + i));
    }
    for (int i = n; i >= 1; i--) {
      suffix[i] = max(suffix[i+1], arr[i] - i);
    }
    long long maxx = 0;
    for (int i = 2; i < n; i++) {
      long long r = arr[i] + prefix[i - 1] + suffix[i + 1];
      if (r > maxx) maxx = r;
    }
    cout << maxx << endl;
  }
  return 0;
}