#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("circlecross.in", "r", stdin);
  freopen("circlecross.out", "w", stdout);
  string s; cin >> s;
  map<char, int> initial;
  
  int counter = 0;
  for (int i = 1; i <= 52; i++) {
    char actual = s[i-1];
    int initialPos = initial[actual];
    if (initialPos) {
      set<char> opens;
      for (int j = initialPos+1; j < i; j++) {
        char c = s[j-1];
        if (opens.count(c)) { // if in substring
          opens.erase(c);
        } else {
          if (initial[c] == j) {
            opens.insert(c);
          }
        }
      }

      counter+= opens.size();
    } else {
      initial[actual] = i;
    }
  }

  cout << counter << endl;

  return 0;
}