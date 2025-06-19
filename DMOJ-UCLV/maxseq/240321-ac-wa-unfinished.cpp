#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int nums[n];
    int consec[500002] = {0};
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int maxima = 2;

    for (int i = n-1; i >= 0; i--) {
        consec[nums[i]] = 1+consec[nums[i]+1];

        maxima = max(maxima,
            consec[nums[i]] + 1 + consec[nums[i] + consec[nums[i]]+1]
        );
    }

    cout << maxima << endl;

    return 0;
}