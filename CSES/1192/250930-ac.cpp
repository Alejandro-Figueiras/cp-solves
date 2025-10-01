#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];
vector<vector<bool>> visited(1001,vector(1001, false));
int rows, cols;

const int R_CHANGE[]{ 0, 1, 0, -1 };
const int C_CHANGE[]{ 1, 0, -1, 0 };
int counter = 0;

void floodfill(int r, int c) {
  counter++;
  stack<pair<int, int>> frontier;
  frontier.push({ r, c });
  while (!frontier.empty()) {
    r = frontier.top().first;
    c = frontier.top().second;
    frontier.pop();

    if (r < 0 || r >= rows || c < 0 || c >= cols || arr[r][c] == 0 ||
      visited[r][c])
      continue;

    visited[r][c] = true;
    for (int i = 0; i < 4; i++) {
      frontier.push({ r + R_CHANGE[i], c + C_CHANGE[i] });
    }
  }
}

int main() {
  cin >> rows >> cols;
  for (int i = 0; i < rows; i++) {
    string s; cin >> s;
    for (int j = 0; j < cols; j++) {
      arr[i][j] = (s[j] == '.') ? 1 : 0;
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] == 1 && !visited[i][j]) floodfill(i,j);
    }
  }

  cout << counter << endl;

  return 0;
}