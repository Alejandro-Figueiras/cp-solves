#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> permutation;
vector<bool> chosen;

bool search() {
  if (permutation.size() == n) {
    for (int x : permutation)
      cout << x << " ";
    return true;
  } else {
    for (int i = 1; i <= n; i++) {
      auto q = permutation.empty() ? -10 : *--permutation.end();
      if (chosen[i] || abs(q-i)==1) continue;
      chosen[i] = true;
      permutation.push_back(i);
      bool k = search();
      if (k) return k;
      chosen[i] = false;
      permutation.pop_back();
    }
    return false;
  }
}


int main() {
  cin >> n;
  chosen = vector<bool>(n + 1, false);
  vector<int> arr(n + 1, 0);
  iota(arr.begin(), arr.end(), 1);

  bool k = search();
  if (!k) cout << "NO SOLUTION" << endl;
  return 0;
}