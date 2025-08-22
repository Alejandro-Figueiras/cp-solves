#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("breedflip.in", "r", stdin);
  freopen("breedflip.out", "w", stdout);
  
  int n; cin >> n; 
  string a,b; cin >> a >> b;
  int count = 0; int uses = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i]) {
      count=0;
    } else {
      if (count == 0) uses++;
      count++;
    }
  }
  cout << uses << endl;
  return 0;
}