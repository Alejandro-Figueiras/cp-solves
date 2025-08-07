#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);
  int n,k;
  cin >> n >> k;
  int a[n], maxx=0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);

  for (int i = 0; i < n; i++) {
    int internal = 1;
    for (int j = i+1; j < n; j++) {
      if (a[j]-a[i] > k) break;
      internal++;
    }
    maxx=max(maxx, internal);
  }
  cout << maxx << endl;
  return 0;
}