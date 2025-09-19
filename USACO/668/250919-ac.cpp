#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("moocast.in", "r", stdin);
  freopen("moocast.out", "w", stdout);
  int n; cin >> n;
  vector<vector<int>> cows;
  for (int i = 0; i < n; i++) {
    int x, y, p; cin >> x >> y >> p;
    vector<int> cow = { x,y,p };
    cows.push_back(cow);
  }
  vector<vector<int>> list(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i==j) continue;
      int x = cows[i][0] - cows[j][0];
      int y = cows[i][1] - cows[j][1];
      int dist = (x * x) + (y * y);
      if (sqrt(dist) <= cows[i][2]) {
        list[i].push_back(j);
      }
    }
  }

  int maxx = 0;
  for (int i = 0; i < n; i++) {
    int counter = 0;
    queue<int> q; q.push(i);
    bool visited[n] = {0}; visited[i] = true;
    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (auto u : list[v]) {
        if (!visited[u]) {
          visited[u] = true;
          q.push(u);
        }
      }
    }
    for (auto x : visited) 
      if (x) counter++;
    maxx = max(counter, maxx);
  }
  cout << maxx << endl;
  return 0;
}