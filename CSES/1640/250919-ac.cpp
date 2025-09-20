#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  pair<int,int> arr[n + 1];
  for (int i = 1; i <= n; i++) { int a; cin >> a; arr[i] = make_pair(a, i); }
  sort(arr, arr + n+1);
  int l=1, r = n;
  while (l < r) {
    ll sum = ((ll)arr[l].first) + arr[r].first;
    if (sum > x) {r--;}
    else if (sum < x) {l++;}
    else {
      cout << arr[l].second << " " << arr[r].second << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}