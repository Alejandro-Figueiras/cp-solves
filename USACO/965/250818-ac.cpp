#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("lineup.in", "r", stdin);
  freopen("lineup.out", "w", stdout);
  int n; cin >> n;
  set<pair<string, string>> constraints;
  string garbage;
  for (int i = 0; i < n; i++) {
    string a, b; cin >> a;
    cin >> garbage; // must
    cin >> garbage; // be
    cin >> garbage; // milked
    cin >> garbage; // beside
    cin >> b;
    constraints.insert(make_pair(a, b));
  }

  vector<string> cows;
  cows.push_back("Beatrice");
  cows.push_back("Bessie");
  cows.push_back("Buttercup");
  cows.push_back("Belinda");
  cows.push_back("Bella");
  cows.push_back("Blue");
  cows.push_back("Betsy");
  cows.push_back("Sue");
  sort(cows.begin(), cows.end());

  set<string> solves;

  do {
    bool flag = true;
    for (auto p : constraints) {
      string a = p.first;
      string b = p.second;
      for (int i = 0; i < 8; i++) {
        if (cows[i] == a) {
          if ((i == 0 || cows[i - 1] != b) && (i == 7 || cows[i + 1] != b)) {
            flag = false;
          }
        }
      }
    }
    if (flag) {
      string s; for (auto c : cows) { s += c; s += "\n"; }
      solves.insert(s);
    }
  } while (next_permutation(cows.begin(), cows.end()));

  cout << *solves.begin();

  return 0;
}