#include <bits/stdc++.h>

using namespace std;

int main() {
  priority_queue<int> S;
  while (true) {
    string orden; cin >> orden;
    if (orden == "end") break;
    else if (orden == "insert") {
      int n; cin >> n;
      S.push(n);
    } else if (orden == "extract") {
      cout << S.top() << endl;
      S.pop();
    }
  }
  return 0;
}
