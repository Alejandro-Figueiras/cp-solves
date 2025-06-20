#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    char a[n], b[n]; // <-- el error esta aquí, cambiando esto por un string deberia dar ac
    cin >> a >> b;
    vector<char> pares;
    vector<char> impares;
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        impares.push_back(a[i]);
        pares.push_back(b[i]);
      } else {
        pares.push_back(a[i]);
        impares.push_back(b[i]);
      }
    }

    /*int p0 = 0, p1 = 0, i0=0, i1 = 0;
    for (int i = 0; i < n; i++) {
        if (pares[i] == '1') {
            p1++;
        } else {
            p0++;
        }
        if (impares[i] == '1') {
            i1++;
        } else {
            i0++;
        }
    }

    if (n%2==0) {
        if (p1 > p0 || i1 > i0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        if (p1-1 > p0 || i1 > i0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }*/


    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end());

    if (n % 2 == 0) {
      if (impares[(n / 2) - 1] == '1') {
        cout << "NO" << endl;
        continue;
      }
      if (pares[(n / 2) - 1] == '1') {
        cout << "NO" << endl;
        continue;
      }
    } else {
      if (impares[n / 2] == '1') {
        cout << "NO" << endl;
        continue;
      }
      if (pares[(n / 2) - 1] == '1') {
        cout << "NO" << endl;
        continue;
      }
    }
    cout << "YES" << endl;
  }
  return 0;
}
