#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int n; ll p;
vector<ll> arr(200005,0);
ll first_true(ll lo, ll hi, function<bool(ll)> f) {
  hi++;
  while (lo < hi) {
    ll mid = lo + (hi - lo) / 2;
    if (f(mid)) {
      hi = mid;
    } else {
      lo = mid + 1;
    }
  }
  return lo;
}

int main() {
  cin >> n >> p;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  ll i = first_true(0, 1e19, [](ll t){
    ll prods = 0;
    for (int j =0; prods < p && j < n; j++) {
      prods += t/arr[j];
    }
    return prods >= p;
  });
  cout << i << endl;
  return 0;
}