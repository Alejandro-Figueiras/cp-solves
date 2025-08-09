#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  int n,m; cin >> n >> m; 
  string spotted[n];
  string simple[n];

  for (int i = 0; i < n; i++) cin >> spotted[i];
  for (int i = 0; i < n; i++) cin >> simple[i];

  int counter = 0;
  for (int i = 0; i < m; i++) {
    for (int j = i+1; j < m; j++) {
      for (int k = j+1; k < m; k++) {
        set<string> cadenas;
        
        for (int c = 0; c < n; c++) {
          string cad = "   ";
          cad[0] = spotted[c][i];
          cad[1] = spotted[c][j];
          cad[2] = spotted[c][k];
          cadenas.insert(cad);
        }
        
        bool unique = true;
        for (int c = 0; c < n; c++) {
          string cad = "   ";
          cad[0] = simple[c][i];
          cad[1] = simple[c][j];
          cad[2] = simple[c][k];
          if (cadenas.count(cad)) {
            unique = false;
            break;
          }
        }
        if (unique) counter++;
      }
    }
  }

  cout << counter << endl;
  return 0;
}