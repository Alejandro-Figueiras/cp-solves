//recreated - ac
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n,m; cin >> n >> m;
  int recent[n+2]={0};
  int recived[n+2] = {0};

  rep(z,0,m) {
    int a; cin >> a;
    if (recent[a]==0) {
      int target = (a==n)?1:a+1;
      recent[target]=a;
      recived[target]++;
    } else {
      int target = recent[a];
      recived[target]++;
      recent[target]=a;
    }
  }
  rep(i,1,n+1) {
    cout << (i==1 ? "" : " ") << recived[i];
  }

  cout << endl;
  return 0;
}