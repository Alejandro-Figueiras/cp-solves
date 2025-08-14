#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int maxx = a[0];
    int firstSum = 0;
    int minSteps = n-1;

    while(firstSum < n) {
      int places = 0; int sum = 0; bool ok = true; 
      for (int i = 0; i < n; i++) {
        sum+= a[i];
        if (sum > maxx || (i==n-1 && sum != maxx)) {
          firstSum++;
          maxx+=a[firstSum];
          ok = false;
          break;
        }
        if (sum == maxx) {
          sum = 0;
          places++;
        }
      }

      if (ok) {
        minSteps = min(minSteps, n-places);
        break;
      }
    }
    cout << minSteps << endl;
  }
  return 0;
}