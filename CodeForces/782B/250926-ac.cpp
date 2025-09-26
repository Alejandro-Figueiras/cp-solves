#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr(600001), v(600001);

double buscar(double lo, double hi, function<bool(double)> f) {
  while (hi - lo > 0.000001) {
    double mid = lo + (hi - lo) / 2.0;
    if (f(mid)) {
      hi = mid;
    } else {
      lo = mid+1e-7;
    }
  }
  return lo;
}

double L, R;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  double k = buscar(0, 1000000001, [](double t) {
    L = arr[0] - v[0] * t;
    R = arr[0] + v[0] * t;

    for (int i = 1; i < n; i++) {
      double l = arr[i] - v[i] * t;
      double r = arr[i] + v[i] * t;
      if (l > R || r < L) return false;

      L = max(l, L); R = min(r, R);
    }
    return L <= R;
    }
  );

  cout << setprecision(12) <<k << endl;
  return 0;
}