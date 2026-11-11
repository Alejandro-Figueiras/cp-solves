// recreated - wa
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int N = 1e5+1;

int main() {
  int n; cin >> n;
  int a[n];
  rep(i,0,n) {
    cin >> a[i];
  }

  int oc[N] = {0};
  int last = a[0];
  rep(i,1,n) {
    if (last != a[i]) {
      last=a[i];
      oc[a[i]]++;
    }
  }

  int del = 0, maxx = 0;
  rep(i,0,n+1) {
    if (oc[i] > maxx) {
      maxx = oc[i];
      del=i;
    }
  }

  last = -1;
  int c = 0;
  rep(i,0,n) {
    if (a[i]==del) continue;
    if (last != a[i]) {
      last = a[i];
      c++;
    }
  }

  c--;
  cout << c << endl;

  return 0;
}