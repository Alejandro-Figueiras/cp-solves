#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  pair<int, int> arr[n + 1];
  for (int i = 1; i <= n; i++) { int a; cin >> a; arr[i] = make_pair(a, i); }
  sort(arr, arr + n + 1);
  for (int i = 1; i <= n; i++) {
    int l = 1, r = n;
    while (l < r) {
      ll sum = arr[i].first + ((ll)arr[l].first) + arr[r].first;
      if (sum > x || r == i) { r--; } else if (sum < x || l == i) { l++; } else {
        cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << endl;
        return 0;
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}