#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long y,x; cin >> y >> x;
        long long layer = max(y,x);
        if (layer %2==0) {
            // par
            if (y==layer) {
                cout << y*y-x+1;
            } else {
                cout << (x-1)*(x-1)+y;
            }
        } else {
            // impar
            if (x==layer) {
                cout << x*x-y+1;
            } else {
                cout << (y-1)*(y-1)+x;
            }
        }
        cout << endl;
    }
    return 0;
}
