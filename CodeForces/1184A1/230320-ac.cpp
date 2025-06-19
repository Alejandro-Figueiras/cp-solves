#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long r; cin >> r;
  if ((r - 3) % 2 == 0 && r >= 5) {
    cout << "1 " << ((r - 3) / 2) << endl;
  } else {
    printf("NO");
  }
}