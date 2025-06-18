#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long moves = 0;
    int last; cin >> last;
    for (int i = 1; i < n; i++) {
        int a; cin >> a;
        if (a > last) {
            last=a;
        } else {
            moves += last-a;
        }
    }
    cout << moves << endl;
    return 0;
}
