#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
vector<int> weights;

ll minimumSum(int index, ll sumA, ll sumB) {
  if (index == n) return abs(sumA-sumB);

  return min(
    minimumSum(index+1, sumA+weights[index], sumB),
    minimumSum(index+1, sumA, sumB + weights[index])
  );
}


int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    weights.push_back(a);
  }

  cout << minimumSum(0,0,0) << endl;

  return 0;
}