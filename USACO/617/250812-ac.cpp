#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("balancing.in", "r", stdin);
  freopen("balancing.out", "w", stdout);
  int n, B; cin >> n >> B;
  pair<int,int> cows[n]; 
  int maxF = 0, maxS = 0;
  int minF = 0, minS = 0;
  for (int i = 0; i < n;  i++) {
    int x,y; cin >> x >> y;
    minF = min(minF, x);
    maxF = max(maxF, x);
    minS = min(minS, y);
    maxS = max(maxS, y);
    auto p = make_pair(x,y);
    cows[i] = p;
  }

  int minn = n;
  while (maxF > minF) {

    while(maxS > minS) {
      // reducir maxS
      int newMaxS = 0;
      for (auto c: cows) {
        if (c.second < maxS) newMaxS = max(newMaxS, c.second);
      }
      maxS = newMaxS;
      
      int a = 0, b = 0, c = 0, d = 0;
      for (auto cow: cows) {
        if (cow.first <= maxF) {
          // arriba
          if (cow.second <= maxS) { a++; } else { b++; }
        } else {
          // abajo
          if (cow.second <= maxS) { c++; } else { d++; }
        }
      }
      minn = min(minn, max( max(a, b) , max(c, d) ));
    }
    
    // reducir maxF y reiniciar maxS
    int newMaxF = 0;
    int newMaxS = 0;
    for (auto c: cows) {
      if (c.first < maxF) newMaxF = max(newMaxF, c.first);
      newMaxS = max(newMaxS, c.second);
    }
    maxF = newMaxF;
    maxS = newMaxS;
  }

  cout << minn << endl;

  return 0;
} 