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

  int teams[n + 1] = { 0 };
  bool flag = true;

  queue<int> q;
  bool visited[n+1] = {0};
  for (int i = 1; i <= n; i++) {
    if (visited[i]) continue;
    q.push(i); visited[i] = true;
    while (!q.empty()) {
      int v = q.front(); q.pop();
      // procesar el nodo
      bool team1F = true, team2F = true;
      for (int amigo : list[v]) {
        if (teams[amigo] == 1) {
          team1F = false;
        }
        if (teams[amigo] == 2) {
          team2F = false;
        }
      }
      if (team1F) {
        teams[v] = 1;
      } else if (team2F) {
        teams[v] = 2;
      } else {
        flag = false; break;
      }
      // -------------

      for (auto u : list[v]) {
        if (!visited[u]) {
          visited[u] = true;
          q.push(u);
        }
      }
    }
  }

  if (!flag) {
    cout << "IMPOSSIBLE";
  } else {
    for (int i = 1; i <= n; i++) {
      cout << (i != 1 ? " " : "") << teams[i];
    }
    cout << endl;
  }


  return 0;
}