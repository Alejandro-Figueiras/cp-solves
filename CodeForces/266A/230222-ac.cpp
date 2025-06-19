#include <iostream>

using namespace std;

int main() {
  int n, res = 0;;
  char c = 'P';
  cin >> n;

  char colors[n];
  cin >> colors;
  for (int i = 1; i < n; i++)
    if (colors[i - 1] == colors[i]) res++;

  printf("%d", res);
  return 0;
}
