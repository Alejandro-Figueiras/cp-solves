#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("tracing.in", "r", stdin);
  freopen("tracing.out", "w", stdout);
  int n, t; cin >> n >> t;
  string f; cin >> f;
  vector<bool> finalInf(n);
  for (int i = 0; i < n; i++) {
    finalInf[i] = f[i]=='1';
  }

  tuple<int,int,int> shakes[t];
  for (int i = 0; i < t; i++) {
    int t,x,y; cin >> t >> x >> y; x--; y--;
    shakes[i] = make_tuple(t,x,y);
  }
  sort(shakes, shakes+t);
  int globalMinK = 500, globalMaxK = -1;
  set<int> zeros;
  for (int cow = 0; cow < n; cow++) {
    if (f[cow] == '0') continue;
    for (int maxK = 0; maxK <= t; maxK++) {
      bool inf[n] = {0}; inf[cow] = true;
      int k[n]; for (int i = 0; i < n; i++) k[i]=maxK;
      for (int i = 0; i < t; i++) {
        int x = get<1>(shakes[i]);
        int y = get<2>(shakes[i]);
        if (inf[x] && k[x] && inf[y] && k[y]) {
          k[x]--; k[y]--;
        } else if (inf[x] && k[x]) {
          k[x]--; inf[y]=true;
        } else if (inf[y] && k[y]) {
          k[y]--; inf[x]=true;
        }
      }
  
      bool ok = true;
      for (int i = 0; i < n; i++) {
        if (finalInf[i] != inf[i]) {
          ok = false; break;
        }
      }
  
      if (ok) {
        zeros.insert(cow);
        globalMinK = min(globalMinK, maxK);
        globalMaxK = max(maxK, globalMaxK);
      }
    }
  }
  
  cout << zeros.size() << " " << globalMinK << " ";
  if (globalMaxK != t) {
    cout << globalMaxK;
  } else {
    cout << "Infinity";
  }
  cout << endl;
  return 0;
}