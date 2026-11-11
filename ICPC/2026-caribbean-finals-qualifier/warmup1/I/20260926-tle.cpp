#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n; cin >> n;
  vi adj[n+1];
  int initial[n+1];
  rep(i,1,n+1) cin >> initial[i];
  rep(i,0,n-1) {
    int a,b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  } 

  int q; cin >> q;
  rep(z,0,q) {
    int t; cin >> t;
    if (t==1) {
      int v,x; cin >> v >> x;
      // inc[v]+=x;
      for(int k: adj[v]) initial[k]+=x;

    } else {
      int v; cin >> v;
      // int cont = initial[v];
      // for(int k: adj[v]) cont+=inc[k];
      cout << initial[v] << endl;
    }
  }
  return 0;
}