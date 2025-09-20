#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n,t; cin >> n >> t;
  int arr[n+1] = {0};
  for (int i = 1; i <= n; i++) cin >> arr[i];
  int r=1; int sum = arr[1], maxx = 0; 
  
  for (int l = 1; l <= n; sum-=arr[l++]) {
    while (r < n && sum + arr[r+1] <= t) sum += arr[++r];
    if (sum <=t) maxx = max(maxx, r-l+1);
  }
  
  cout << maxx << endl;

  return 0;
}