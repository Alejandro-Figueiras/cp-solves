#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    if (n==2 || n==3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (int i = 2; i <= n; i+=2) cout << i << " ";
    for (int i = 1; i <= n; i+=2) {
        if (i!= 1) cout << ' ';
        cout << i;
    }
    cout << endl;
    return 0;
}
