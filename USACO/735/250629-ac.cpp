#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  
  int a, b; cin >> a >> b;
  int pos = a;
  int incremento = 1;
  long long distancia = 0;
  for (int i = 0;; i++) {
    int target = a + (incremento * (i&1 ? -1 : 1));
    incremento *=2;
    distancia += abs(target - pos);
    pos = target;
    if ( (b > a && pos > b) || (b < a && pos < b) || pos == b) {
      distancia -= abs(pos-b);
      cout << distancia << endl;
      break;
    }
  } 

  return 0;
}