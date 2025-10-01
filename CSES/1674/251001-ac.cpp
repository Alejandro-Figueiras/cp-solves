#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(200005);
bool visited[200005] = { 0 };
vector<int> subordinates(200005,0);
void dfs(int s) {
  if (visited[s]) return;
  visited[s] = true;
  for (auto u : adj[s]) {
    dfs(u);
    subordinates[s] += subordinates[u]+1;
  }
}


int main() {
  int n; cin >> n;
  for (int i = 2; i <= n; i++) {
    int a; cin >> a;
    adj[a].push_back(i);
  }
  dfs(1);
  for (int i = 1; i <= n; i++) {
    cout << subordinates[i] << " ";
  }
  return 0;
}