#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    set<int> nums;
    int array[2*n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int a; cin >> a;
        nums.insert(a);
        array[i+j+1] = a;
      }
    }

    for (int i = 1; i <= 2*n; i++) {
      if (!nums.count(i)) {
        array[0] = i;
        break;
      }
    }

    for (int i: array) {
      cout << i << " ";
    }
    cout << endl;
    
  }
  return 0;
}