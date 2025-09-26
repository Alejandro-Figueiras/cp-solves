#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int n, k; 
ll arr[200005];

ll first_true(ll lo, ll hi, function<bool(ll)> f) {
	hi++;
	while (lo < hi) {
		ll mid = (lo + hi) / 2;
		if (f(mid)) {
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}
	return lo;
}

int main() {
  cin >> n >> k;
  ll hi = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    hi+= arr[i];
  }

  ll p = first_true(0, hi, [](ll t){
    int subs = 1; ll sum = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] > t) return false;
      sum+=arr[i];
      if (sum > t) {
        sum = arr[i];
        subs++;
      }
    }

    return subs <= k;
  });
  
  cout << p << endl;

  return 0;
}