#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int N = 100001;
vector<int> adj[N]; vector<bool> visited(N, false);
vector<int> adj2[N]; vector<bool> visited2(N, false);
int visiteds = 0;
int visiteds2 = 0;
bool flag = false;
bool flag2 = false;
void dfs(int s) {
  if (visited[s]) return;
  visited[s] = true;
  visiteds++;
  for (auto u : adj[s]) {
    dfs(u);
  };
}
void dfs2(int s) {
  if (visited2[s]) return;
  visited2[s] = true;
  visiteds2++;
  for (auto u : adj2[s]) dfs2(u);
}

int main() {
  int n, m; cin >> n >> m;
  rep(i, 0, m) {
    int a, b; cin >> a >> b;
    adj[a].push_back(b);
    adj2[b].push_back(a);
  }
  dfs(1);
  dfs2(1);
   
  rep(i,1,n+1) {
    if (!visited[i]) {
      cout << "NO" << endl;
      cout << 1 << ' ' << i;
      return 0;
    }
    if (!visited2[i]) {
      cout << "NO" << endl;
      cout << i << ' ' << 1;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}