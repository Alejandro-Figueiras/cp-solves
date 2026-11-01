#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  int n,x; cin >> n >> x;
  int arr[n];
  rep(i,0,n) cin >> arr[i];
  sort(arr, arr+n);
  int cont = 0;
  rep(i,0,n) {
    if (arr[i] <= x) {
      x-=arr[i];cont++;
    }
  }
  cout << cont << endl;

  return 0;
}