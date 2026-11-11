#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i = a; i < (b); ++i)
typedef long long ll;


int main() {
    int n; cin >> n;
    unordered_map<int,int> nums;

    int cont2 = 0;
    rep(i,0,n) {
        int x; cin >> x;
        if (++nums[x] == 2 || nums[x] == 4) {
            cont2++;
            if (cont2 == 2 || nums[x] == 4) {
                cout << "YES" << endl;
                return 0;
            }
        }
        
    }
    cout << "NO" << endl;
    return 0;
}