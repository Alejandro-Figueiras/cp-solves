#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("notlast.in", "r", stdin);
  freopen("notlast.out", "w", stdout);
  int n; cin >> n;
  map<string, int> cows;
  cows["Bessie"] = 0;
  cows["Elsie"] = 0;
  cows["Daisy"] = 0;
  cows["Gertie"] = 0;
  cows["Annabelle"] = 0;
  cows["Maggie"] = 0;
  cows["Henrietta"] = 0;
  
  for (int i = 0; i < n; i++) {
    string s; int k; cin >> s >> k;
    cows[s]+=k;
  }
  vector<pair<int, string>> prod;
  for (auto c: cows)
    prod.push_back(make_pair(c.second, c.first));
  sort(prod.begin(), prod.end());
  
  int minn = -1;
  int nminn = -1;
  string output;
  for (auto p: prod) {
    if (minn == -1) {
      minn = p.first;
      continue;
    } 
    if (p.first == minn) continue;
    if (nminn == -1) {
      nminn = p.first;
      output = p.second;
      continue;
    }
    if (p.first != nminn) break;
    nminn = -1; break;
  }

  if (nminn == -1) {
    cout << "Tie" << endl;
  } else {
    cout << output << endl;
  }
 
  return 0;
}