#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  double sum = a * b + c * d + e * f;
  double raiz = sqrt(sum);
  int n = ceil(raiz);
  if (raiz == n) {

    vector<string> board(n, string(n, 'Z'));
    vector<pair<pair<int, int>, char>> companies;
    companies.push_back(make_pair(
      make_pair(max(a, b), min(a, b)),
      'A'
    ));
    companies.push_back(make_pair(
      make_pair(max(c, d), min(c, d)),
      'B'
    ));
    companies.push_back(make_pair(
      make_pair(max(e, f), min(e, f)),
      'C'
    ));
    sort(companies.begin(), companies.end());

    do {
      board = vector(n, string(n, 'Z'));
      auto cmpA = companies[0];
      auto cmpB = companies[1];
      auto cmpC = companies[2];

      // found space
      int x1, y1; bool flag1 = false;
      for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++)
          if (board[y][x] == 'Z') { flag1 = true; x1 = x; y1 = y; break; }
        if (flag1) break;
      }

      if (x1 + cmpA.first.first - 1 < n && y1 + cmpA.first.second - 1 < n) {
        for (int y = y1; y < y1 + cmpA.first.second; y++)
          for (int x = x1; x < x1 + cmpA.first.first; x++)
            board[y][x] = cmpA.second;
      } else if (x1 + cmpA.first.second - 1 < n && y1 + cmpA.first.first - 1 < n) { // rotated
        for (int y = y1; y < y1 + cmpA.first.first; y++)
          for (int x = x1; x < x1 + cmpA.first.second; x++)
            board[y][x] = cmpA.second;
      } else continue;

      // found space
      int x2, y2; bool flag2 = false;
      for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++)
          if (board[y][x] == 'Z') { flag2 = true; x2 = x; y2 = y; break; }
        if (flag2) break;
      }

      if (x2 + cmpB.first.first - 1 < n && y2 + cmpB.first.second - 1 < n) {
        for (int y = y2; y < y2 + cmpB.first.second; y++)
          for (int x = x2; x < x2 + cmpB.first.first; x++)
            board[y][x] = cmpB.second;
      } else if (x2 + cmpB.first.second - 1 < n && y2 + cmpB.first.first - 1 < n) { // rotated
        for (int y = y2; y < y2 + cmpB.first.first; y++)
          for (int x = x2; x < x2 + cmpB.first.second; x++)
            board[y][x] = cmpB.second;
      } else continue;

      int x3, y3; bool flag3 = false;
      for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++)
          if (board[y][x] == 'Z') { flag3 = true; x3 = x; y3 = y; break; }
        if (flag3) break;
      }

      if (x3 + cmpC.first.first - 1 < n && y3 + cmpC.first.second - 1 < n) {
        for (int y = y3; y < y3 + cmpC.first.second; y++)
          for (int x = x3; x < x3 + cmpC.first.first; x++)
            board[y][x] = cmpC.second;
      } else if (x3 + cmpC.first.second - 1 < n && y3 + cmpC.first.first - 1 < n) { // rotated
        for (int y = y3; y < y3 + cmpC.first.first; y++)
          for (int x = x3; x < x3 + cmpC.first.second; x++)
            board[y][x] = cmpC.second;
      } else continue;

      bool flag4 = false;
      for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++)
          if (board[y][x] == 'Z') { flag4 = true; break; }
        if (flag4) break;
      }
      if (!flag4) break;
    } while (next_permutation(companies.begin(), companies.end()));

    bool flag4 = false;
    for (int y = 0; y < n; y++) {
      for (int x = 0; x < n; x++)
        if (board[y][x] == 'Z') { flag4 = true; break; }
      if (flag4) break;
    }
    if (flag4) {
      cout << -1 << endl;
    } else {
      cout << raiz << endl;
      for (auto s : board) cout << s << endl;
    }
  } else {
    cout << -1 << endl;
  }

  return 0;
}