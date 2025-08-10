#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("balancing.in", "r", stdin);
  freopen("balancing.out", "w", stdout);
  int n, B; cin >> n >> B;
  vector<pair<int,int>> cows;
  set<int> xs, ys;
  for (int i = 0; i < n;  i++) {
    int x,y; cin >> x >> y;
    cows.push_back(make_pair(x,y));
  }
  
  int a = 0; int maxx = n; int west = 0; int westAux = 0;
  for (int i = 1; i<=B; i+=2) {
    for (int j = 0; j < n; j++) {
      auto cow = cows[j];
      if (cow.first == i) westAux++;
    }

    int tmpMax = max(westAux, n-westAux);
    if (tmpMax < maxx) {
      a=i+1;
      maxx = tmpMax;
      west = westAux;
    }
  }
  int east = n-west;

  int b = 0, maxy = n; 
  int northwest = 0; int northwestAux = 0;
  int northeast = 0; int northeastAux = 0;

  for (int i = 1; i<=B; i+=2) {
    for (int j = 0; j < n; j++) {
      auto cow = cows[j];
      if (cow.second == i) {
        if (cow.first < a) {
          northwestAux++;
        } else {
          northeastAux++;
        }
      }
    }

    int tmpMax = max( max(northeastAux, east-northeastAux) , max(northwestAux, west-northwestAux));
    if (tmpMax < maxy) {
      b=i+1;
      maxy = tmpMax;
      northwest = northwestAux;
      northeast = northeastAux;
    }
  }

  cout << maxy << endl;

  return 0;
} 