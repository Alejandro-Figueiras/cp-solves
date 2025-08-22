#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int gp = 0, gi = 0, count = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'G') {
      if (i%2==0) {
        gi++;
      } else {
        gp++;
      }
    }
  }
  int gir = 0, gpr = 0;
  for (int i = n-1; i >= 0; i--) {
    if (gi > gp && i%2==0) {
      swap(gi,gp);
      for (int j = 0; j <= i/2; j++) swap(s[j], s[i-j]);
      count++;
    }
    if (s[i] == 'G') {
      if (i%2==0) {
        gi--;
        gir++;
      } else {
        gp--;
        gpr++;
      }
    }
  }
  cout << count << endl;
  return 0;
}