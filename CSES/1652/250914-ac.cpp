#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q; cin >> n >> q;
  vector<vector<int>> prefix(n + 1, vector(n + 1, 0));
  vector<vector<int>> arr(n + 1, vector(n + 1, 0));
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (int j = 0; j < n; j++) {
      arr[i + 1][j + 1] = (s[j] == '*') ? 1 : 0;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j];
    }
  }

  for (int i = 0; i < q; i++) {
    int a,A,b,B; cin >> a >> b >> A >> B;
    int num = prefix[A][B] - prefix[a-1][B] - prefix[A][b-1] + prefix[a-1][b-1];
    cout << num << endl;
  }
  return 0;
}