#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int nums[n];
  int maxNum = 0;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    maxNum = max(maxNum, nums[i]);
  }

  int maxPrimo = 1;

  // Criba
  int criba[maxNum + 1];
  for (int i = 2; i <= maxNum; i++) {
    criba[i] = true;
  }
  for (int i = 2; i <= maxNum; i++) {
    if (criba[i] && (long long)i * i <= maxNum) {
      for (int j = i * i; j <= maxNum; j += i) {
        criba[j] = false;
      }

      // Solucion
      int primos = 0;
      for (int q = 0; q < n; q++) {
        if (nums[q] % i == 0) {
          primos++;

          if (primos >= k) {
            maxPrimo = i;
            break;
          }
        } else {
          primos = 0;
        }
      }
    }
  }

  cout << maxPrimo << endl;


  return 0;
}