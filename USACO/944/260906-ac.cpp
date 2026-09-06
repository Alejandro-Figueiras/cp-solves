#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  freopen("fenceplan.in", "r", stdin);
  freopen("fenceplan.out", "w", stdout);
  int N, M; cin >> N >> M;
  vector<pii> cows(N+1);
  rep(i,1,N+1) {
    pii c; cin >> c.first >> c.second;
    cows[i]=c;
  }
  vector<int> adj[N+1];
  rep(i,0,M) {
    int a,b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  ll minP = 4000000009;

  queue<int> q;
  bool visited[N+1] = { 0 }; 
  
  rep(i,1,N+1) {
    if (visited[i]) continue;
    q.push(i);
    int x1=100000001,x2=0,y1=100000001,y2=0;

    // BFS
    while (!q.empty()) {
      int v = q.front(); q.pop();
      // process node v
      for (auto u : adj[v]) {
        if (!visited[u]) {
          visited[u] = true;
          q.push(u);
  
          // limites
          auto c = cows[u];
          x1 = min(x1, c.first);
          x2 = max(x2, c.first);
          y1 = min(y1, c.second);
          y2 = max(y2, c.second);
        }
      }
    }

    ll p = 2*( (ll)(x2-x1) + (ll)(y2-y1) );
    if (p < minP) minP = p;
  }

  cout << minP << endl;
  


  return 0;
}