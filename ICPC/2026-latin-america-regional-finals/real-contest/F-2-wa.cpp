// recreated - WA
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
  int n; cin >> n; int nn=n;
  vi a;
  int ilast = 0;
  rep(i,0,n) {
    int q; cin >> q;
    if (ilast == q) continue;
    ilast = q;
    a.push_back(q);
  }

  n=a.size();
  int cnt[N]={0};
  set<int> l[N];
  
  rep(i,0,n) {
    if (i==0) {
      cnt[a[i]]+= (a[i+1]!=a[i]?1:0);
    } else if (i==n-1) {
      cnt[a[i]]+= (a[i-1]!=a[i]?1:0);
    } else {
      if (a[i]==a[i-1]&&a[i]==a[i+1]) continue;
      if (a[i-1]!=a[i+1]) {
        cnt[a[i]]++;
      } else {
        cnt[a[i]]+=2;
      }
    }
  }

  int del = 0, maxx = 0;
  rep(i,0,nn+1) {
    if (cnt[i] > maxx) {
      maxx = cnt[i];
      del=i;
    }
  }

  int last = -1, c = 0;
  rep(i,0,n) {
    if (a[i]==del) continue;
    if (last != a[i]) {
      last = a[i];
      c++;
    }
  }

  if (c>0) c--;
  cout << c << endl;

  return 0;
}