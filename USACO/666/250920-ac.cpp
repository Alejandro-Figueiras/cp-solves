#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("haybales.in", "r", stdin);
  freopen("haybales.out", "w", stdout);
  int n,q; cin >> n >> q;
  vector<int> arr = vector(n,0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for (int z = 0; z < q; z++) {
    int a,b; cin >> a >> b;
    auto A = lower_bound(arr.begin(), arr.end(), a) - arr.begin();
    auto B = upper_bound(arr.begin(), arr.end(), b) - arr.begin();
    cout << B - A << endl;
  }

  return 0;
}