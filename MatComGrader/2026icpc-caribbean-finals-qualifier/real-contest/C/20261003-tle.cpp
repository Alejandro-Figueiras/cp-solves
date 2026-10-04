#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()
typedef long long ll;


int main() {
    string a,b; cin >> a >> b;
    int sa = sz(a), sb = sz(b);
    if (sb>sa) {
        swap(a,b);swap(sa,sb);
    }
    int index = -1;
    rep(j,0,sb) {
        if (a[0]==b[j]) {
            int ind=j;
            bool flag = true;
            rep(i,1,sa) {
                ind = (ind+1)%sb;

                if (a[i]!=b[ind]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                index=j;
                break;
            }
        }
    }
    cout << ((index==-1)?"NO":"YES") << endl;
    return 0;
}