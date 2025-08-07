#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
  
  int x,y,m; cin >> x >> y >> m;

  int milk = 0;
  for (int i = 0; i*x <= m; i++) {
    for (int j = 0; j*y <= m; j++) {
      int a = i*x + j*y;
      if (a > m) break;
      milk = max(milk, a);
    }
  }

  cout << milk << endl;

  return 0;
}