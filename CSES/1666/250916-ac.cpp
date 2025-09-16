#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> list(n + 1);
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    list[a].push_back(b);
    list[b].push_back(a);
  }

  queue<int> q;
  vector<bool> visited(n + 1);
  vector<int> news;
  for (int i = 1; i <= n; i++) {
    if (visited[i]) continue;
    visited[i] = true;
    if (i != 1) news.push_back(i);
    q.push(i);
    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (auto u : list[v]) {
        if (!visited[u]) {
          visited[u] = true;
          q.push(u);
        }
      }
    }
  }

  cout << news.size() << endl;
  for (int x : news) {
    cout << 1 << " " << x << endl;
  }


  return 0;
}