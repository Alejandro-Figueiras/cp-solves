#include <bits/stdc++.h>
using namespace std;

set<string> victories;

void validar(char a, char b, char c) {
  set<char> st;
  st.insert(a);
  st.insert(b);
  st.insert(c);
  string cadena = "";
  for (char x:st) cadena+= x;
  if (cadena.size() < 3) victories.insert(cadena);
}

int main() {
  freopen("tttt.in", "r", stdin);
  freopen("tttt.out", "w", stdout);
  
  string grid[3];
  cin >> grid[0] >> grid[1] >> grid[2];

  validar(grid[0][0], grid[0][1], grid[0][2]);
  validar(grid[1][0], grid[1][1], grid[1][2]);
  validar(grid[2][0], grid[2][1], grid[2][2]);

  validar(grid[0][0], grid[1][0], grid[2][0]);
  validar(grid[0][1], grid[1][1], grid[2][1]);
  validar(grid[0][2], grid[1][2], grid[2][2]);

  validar(grid[0][0], grid[1][1], grid[2][2]);
  validar(grid[2][0], grid[1][1], grid[0][2]);

  int indiv = 0, teams=0;
  for (string s: victories) {
    if (s.size() == 2) {
      teams++;
    } else {
      indiv++;
    }
  }

  cout << indiv << endl << teams << endl;

  return 0;
}