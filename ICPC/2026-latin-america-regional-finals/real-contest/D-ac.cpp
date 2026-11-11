// recreated - AC
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  string s; cin >> s;
  int n = s.size();
  int arr[n];
  int unos = 0;
  int minn = n+1;
  int maxx = 0;
  rep(i,0,n) {
    arr[i]=s[i]-'0';
    if (arr[i]) unos++;
  }
  rep(i,0,n) {
    int should = (arr[i]+i)%2;
    unos = n-unos;
    unos+=should?1:-1;
    minn=min(minn,unos);
    maxx=max(maxx, unos);
  }
  cout << minn << " " << maxx << endl;
  return 0;
}