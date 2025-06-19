#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int nums[n - 1];
  for (int i = 0; i < n - 1; i++) {
    cin >> nums[i];
  }

  sort(nums, nums + (n - 1));
  for (int i = 1; i <= n; i++) {
    if (i == n) {
      cout << n << endl;
      break;
    }
    if (i != nums[i - 1]) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}