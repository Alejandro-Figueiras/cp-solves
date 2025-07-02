#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  
  int n; 
  cin >> n;

  int shells[4] = {0};

  for (int i = 0; i < n; i++) {
    int a, b, c; cin >> a >> b >> c;
    swap(shells[a], shells[b]);
    shells[c]++;
  }

  int maximo = 0;
  for (int i = 1; i <= 3; i++) {
    maximo = max(maximo, shells[i]);
  }

  cout << maximo << endl;
  

  return 0;
}