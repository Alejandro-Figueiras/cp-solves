#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  
  int dist = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      int x = a[i] - a[j];
      int y = b[i] - b[j];
      dist = max(dist, x*x + y*y);
    }
  }

  cout << dist << endl;

  return 0;
}