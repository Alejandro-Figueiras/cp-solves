#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("blist.in", "r", stdin);
  freopen("blist.out", "w", stdout);
  
  int n; cin >> n;
  int a[1001] = {0};
  int b[1001] = {0};

  int reserva = 0;
  int buckets = 0;
  for (int i = 0; i < n; i++) {
    int p,q,r; cin >> p >> q >> r;
    a[p] += r;
    b[q] += r;
  }
  for (int i = 0; i <= 1000; i++) {
    if (a[i]) {
      buckets += max(a[i] - reserva, 0);
      reserva = max(reserva - a[i], 0);
    }
    if (b[i]) {
      reserva += b[i];
    }
  }

  cout << buckets << endl;

  return 0;
}