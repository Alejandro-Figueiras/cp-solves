#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    if (k == 2) {
      for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
          cout << 0 << endl;
          break;
        }
        if (i == n - 1) {
          cout << 1 << endl;
        }
      }
    } else if (k == 4) {
      int minimoResto = 1;
      int minimoRestoDos = 1;
      int restoCuatro = 0;
      for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 4 == 0) {
          cout << 0 << endl;
          break;
        }

        if (minimoResto == 0) {
          minimoRestoDos = min(minimoRestoDos, a % 2);
          if (minimoRestoDos == 0) {
            cout << 0 << endl;
            break;
          }
        } else
          minimoResto = min(minimoResto, a % 2);

        restoCuatro = max(restoCuatro, a % 4);
        if (i == n - 1) {
          if (minimoResto == 1 &&
            minimoRestoDos == 1 &&
            restoCuatro != 3) {
            cout << 2 << endl;
          } else {
            cout << 1 << endl;
          }
        }
      }
    } else { // k==5
      int maximoResto = 0;
      for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % k == 0) {
          cout << 0 << endl;
          break;
        }
        maximoResto = max(maximoResto, a % k);
        if (i == n - 1) {
          cout << k - maximoResto << endl;
        }
      }
    }
  }
  return 0;
}
