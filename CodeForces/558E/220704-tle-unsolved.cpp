#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  string s;
  cin >> s;
  for (int z = 0; z < q; z++) {
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    if (k == 1) {
      sort(s.begin() + (i - 1), s.begin() + j);
    } else {
      sort(s.begin() + (i - 1), s.begin() + j, [](int a, int b) { return a > b; });
    }
  }
  cout << s;
  return 0;
}
