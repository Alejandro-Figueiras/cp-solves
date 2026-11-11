#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()
typedef long long ll;


int main() {
   int t; cin >> t;
   for (int z=0; z < t;z++) {
        int n; cin >> n;
        string s; cin >> s;
        queue<int> R; int cont = 0, contR = 0;
        cout << "Case #" << z+1 << ":" << endl;
        rep(i,0,n) {
            if (s[i]== 'V') {
                cout << i+1 << " V" << endl;
                for (int i = 0; i < 2; i++) {
                    if (contR == 0) {
                        if (cont < 2) cont++; 
                        continue;
                    }
                    int k = R.front(); R.pop();
                    cout << k+1 << " R" << endl;
                    contR--;
                }
            } else {
                if (cont > 0) {
                    cout << i+1 << " R" << endl;
                    cont--;
                } else {
                    contR++;
                    R.push(i);
                }
            }
        }

        while (contR>0) {
            int k = R.front(); R.pop();
            cout << k+1 << " R" << endl;
            contR--;
        }
   }
    return 0;
}