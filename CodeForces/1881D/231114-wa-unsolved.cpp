#include <bits/stdc++.h>

using namespace std;

vector<int> primos;

int main() {
  // criba
  vector<bool> is_prime(101, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= 100; i++) {
    if (is_prime[i]) {
      primos.push_back(i);
      for (int j = i * i; j <= 100; j += i)
        is_prime[j] = false;
    }
  }


  int z; scanf("%d", &z);

  for (int t = 0; t < z; t++) {
    int n; scanf("%d", &n);
    int arr[n];

    int factores[100] = { 0 };

    for (int i = 0; i < n; i++) {
      int x; scanf("%d", &x);
      for (int d : primos) {
        while (x % d == 0) {
          x /= d; factores[d]++;
        }
      }
    }

    bool res = true;
    for (int d : primos) {
      if (factores[d] % n != 0) {
        res = false;
        break;
      }
    }

    printf(res ? "YES\n" : "NO\n");
  }
  return 0;
}
