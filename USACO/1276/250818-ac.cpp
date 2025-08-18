#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> spaces(101, 0);
  for (int i = 0; i < n; i++) {
    int s, t, c; cin >> s >> t >> c;
    for (int j = s; j <= t; j++) spaces[j] = c;
  }
  tuple<int, int, int, int> airs[m];
  for (int i = 0; i < m; i++) {
    int a, b, p, m; cin >> a >> b >> p >> m;
    airs[i] = make_tuple(a, b, p, m);
  }
  sort(airs, airs + m);
  int minn = 99999999;

  for (int b = 0; b < (1 << m); b++) {
    vector<int> attempt(101, 0);
    int money = 0;
    for (int i = 0; i < m; i++) {
      if (b & (1 << i)) {
        auto t = (airs[i]);
        int x = get<0>(t);
        int y = get<1>(t);
        int p = get<2>(t);
        money += get<3>(t);
        for (int q = x; q <= y; q++) attempt[q] += p;
      }
    }

    bool flag = true;
    for (int i = 0; i < 101; i++){
      if (spaces[i] - attempt[i] > 0) {
        flag=false; break;
      }
    }
    if (flag) minn = min(minn, money);
  }

  cout << minn << endl;

  return 0;
}