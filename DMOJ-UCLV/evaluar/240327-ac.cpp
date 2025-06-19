#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int operaciones = s.size() / 4;

  int numerazo = 0;

  for (int i = 0; i < operaciones; i++) {
    if (s[i * 4 + 1] == '+') {
      numerazo++;
    } else {
      numerazo--;
    }
  }

  cout << numerazo << endl;
  return 0;
}