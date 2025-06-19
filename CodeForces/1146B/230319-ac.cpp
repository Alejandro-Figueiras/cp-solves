#include <iostream>
using namespace std;

int main() {
  string t; cin >> t;
  string p = "";
  for (int i = 0; i < t.size(); i++) {
    if (t[i] != 'a')
      p += t[i];
  }
  if (p.size() % 2 == 0) {
    int subsize = p.size() / 2;
    for (int i = 0; i < subsize; i++) {
      if (p[i] != p[subsize + i]) {
        printf(":(");
        return 0;
      }
    }
    if (t.substr(0, t.size() - subsize) + p.substr(subsize, p.size()) == t) {
      cout << t.substr(0, t.size() - subsize);
    } else {
      printf(":(");
    }
  } else {
    printf(":(");
  }
  return 0;
}