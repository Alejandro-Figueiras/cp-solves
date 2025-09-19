#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m, k; cin >> n >> m >> k;
  ll arr[n + 1];
  vector<vector<ll>> ops = vector(m + 2, vector<ll>(3));
  ll diff[n + 3] = { 0 };
  for (int i = 1; i <= n; i++) cin >> arr[i];
  for (int i = 1; i <= m; i++)
    cin >> ops[i][0] >> ops[i][1] >> ops[i][2];
  ll diff2[m + 3] = { 0 };
  for (int i = 1; i <= k; i++) {
    int X, Y; cin >> X >> Y;
    diff2[X]++; diff2[Y + 1]--;
  }

  for (int i = 1; i <= m; i++) {
    diff2[i] += diff2[i - 1];

    diff[ops[i][0]] += ops[i][2] * diff2[i];
    diff[ops[i][1] + 1] -= ops[i][2] * diff2[i];
  }

  for (int i = 1; i <= n; i++) {
    diff[i] += diff[i - 1];
    arr[i] += diff[i];
    cout << arr[i] << " ";
  }

  return 0;
}