#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)
typedef unsigned long long ll;
#define rep2(i, a, b) for (ll i = a; i < (b); i++)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
typedef pair<int, int> pii;
typedef vector<int> vi;
int m = 1000000007;
// Dio RTE pero se puede tomar la implementación como MLE o TLE 
// porque se iba de tiempo y memoria con numeros grandes.
// Posible solucion correcta con exponenciación de matrices.
int main() {
  int q; cin >> q;
  ll nums[q];
  set<ll> num;
  ll maxx = 1;
  rep(i, 0, q) {
    cin >> nums[i];
    num.insert(nums[i]);
    if (nums[i] > maxx)maxx = nums[i];
  }

  map<ll,int> fibo;
  fibo[0] = 0;fibo[1] = 1;
  map<ll,int> p; p[2] = 4;
  map<ll,int> cinco;
  int cont = 0;
  rep2(n, 2, maxx+1) {
    // fibo[n] = (((fibo[n - 1] + fibo[n - 2]) % m
    //   + (2 * ((n*n)%m)) % m) % m + 5) % m;

    fibo[n] = (fibo[n - 1] + fibo[n - 2])%m;
    p[n] = (cont + n%m*n%m)%m;
    cont += p[n];
    cinco[n] =(cinco[n-1]+ fibo[n]-fibo[n-2])%m; 
    fibo[n];
    
  }

  rep(i,0,q){
    ll n = nums[i];
    cout << fibo[n] +( p[n]*2) + cinco[n]*5 << endl;
  }
  return 0;
}

// int main() {
//   int q; cin >> q;
//   ll nums[q];
//   ll maxx = 1;
//   rep(i, 0, q) {
//     cin >> nums[i];
//     if (nums[i] > maxx)maxx = nums[i];
//   }

//   vector<ll> fibo(maxx + 2);
//   fibo[0] = 0;fibo[1] = 1;
//   rep(n, 2, maxx+1) {
//     fibo[n] = (((fibo[n - 1] % m + fibo[n - 2] % m) % m
//       + (2 * (((n%m*n%m)%m)) % m) % m) + 5) % m;
//   }

//   rep(i,0,q){
//     cout << fibo[nums[i]] << endl;
//   }
//   return 0;
// }