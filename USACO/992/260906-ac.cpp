#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  freopen("wormsort.in", "r", stdin);
  freopen("wormsort.out", "w", stdout);
  int n, m; cin >> n >> m;
  int cows[n + 1] = { 0 };
  unordered_set<int> cc;
  rep(i, 1, n + 1) {
    cin >> cows[i];
    if (cows[i] != i) cc.insert(i);
  }
  set<pair<int, pii>> holes;
  rep(i, 0, m) {
    int a, b, w; cin >> a >> b >> w;
    holes.insert({ w,{a,b} });
  }
  vector<int> adj[n + 1];

  queue<int> q;
  bool visited[n + 1] = { 0 };
  int minn = 2000000000;
  
  if (cc.empty()) {
    cout << -1 << endl;
    return 0;
  }
  
  auto first = *cc.begin();
  visited[first] = true;
  cc.erase(first);


  while (!cc.empty()) {
    auto arista = *(--holes.end());
    minn = arista.first;
    pii cx = arista.second;
    adj[cx.first].push_back(cx.second);
    adj[cx.second].push_back(cx.first);
    holes.erase(arista);

    if (visited[cx.first] && visited[cx.second]) {
      continue;
    }
    if (!visited[cx.first] && !visited[cx.second]) {
      continue;
    }

    int unvisited = visited[cx.first] ? cx.second : cx.first;
    q.push(unvisited);
    visited[unvisited] = true;
    cc.erase(unvisited);

    // BFS
    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (auto u : adj[v]) {
        if (!visited[u]) {
          visited[u] = true;
          cc.erase(u);
          q.push(u);
        }
      }
    }
  }

  cout << minn << endl;
  return 0;
}