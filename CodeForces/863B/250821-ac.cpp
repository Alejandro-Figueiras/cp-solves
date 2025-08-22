#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int pesos[2*n];
  for (int i = 0; i < 2*n; i++) 
    cin >> pesos[i];
  sort(pesos, pesos+(2*n));

  int minn= 9999999;
  for (int i = 0; i < 2*n; i++) {
    for (int j = i+1; j < 2*n; j++) {
      vector<int> nP;
      for (int k = 0; k < 2*n; k++) {
        if (k == i || k == j) continue;
        nP.push_back(pesos[k]);
      }
      sort(nP.begin(), nP.end());
      int diff = 0;
      int n = nP.size();
      for (int i = 0; i < n; i+=2) {
        diff += nP[i+1]-nP[i];
      }
      minn = min(minn, diff);
    }
  }
  cout << minn << endl;

  return 0;
}