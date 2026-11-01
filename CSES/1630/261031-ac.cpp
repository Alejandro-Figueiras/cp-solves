#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<int> vi;

int main() {
  int n; cin >> n;
  pii tasks[n];
  rep(i,0,n) {
    cin >> tasks[i].first >> tasks[i].second;
  }
  sort(tasks, tasks+n);
  ll a=0,r=0;
  for (auto t:tasks) {
    a+=t.first;
    r+=t.second-a;
  }
  cout << r << endl;

  return 0;
}