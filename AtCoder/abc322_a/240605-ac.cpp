#include <iostream>

using namespace std;

int main() {
  int n, s, k, p, q, t = 0;
  cin >> n >> s >> k;


  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    int x = p * q;
    t = t + x;
  }

  if (t < s) t = t + k;

  cout << t << endl;
  return 0;
}
