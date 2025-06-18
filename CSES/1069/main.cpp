#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int maxStreak = 1;
    char lastChar = '\0';
    int streak = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        char a = s[i];
        if (a == lastChar) {
            streak++;
            maxStreak = max(maxStreak, streak);
        } else {
            streak = 1;
            lastChar = a;

        }
    }
    cout << maxStreak << endl;
    return 0;
}
