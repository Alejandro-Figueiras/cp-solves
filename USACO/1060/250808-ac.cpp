#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int counter = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // optimizable with an accumulative sum
      float sum = 0;
      for (int k = i; k <=j; k++) {
        sum += a[k];
      }
      /////////

      float prom = sum / (j-i+1);
      for (int k = i; k <=j; k++) {
        if (a[k]==prom) {
          counter++;
          break;
        }
      }
    }
  }
  cout << counter << endl;

  return 0;
}