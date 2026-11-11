#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()
typedef unsigned long long ll;
// 1 3 1031301349134
vector<ll> arr;
ll last = 0;
ll build = 0;
int n;

bool revisar(int i) {
    if (i==0) return false;
    int cifras = floor(log10(arr[i]))+1;
    int pc = arr[i]/1e6;
    arr[i-1]*=10;
    arr[i-1]+= pc;
    arr[i] %= (int)floor(1e6);
    if (arr[i-1]>1e6) return revisar(i-1);
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        string s; cin >> s;
        n=sz(s);
        arr.clear();
        last=0; build=0;
        int divisions = k;
        int flag = true;
        rep(i,0,n) {
            build*=10;
            build+=s[i]-'0';
            if (build > 1e6) {
                if (sz(arr)==0 || last == 0) {
                    flag=false;
                    break;
                }
                int cifras = floor(log10(build))+1;
                int pc = build/1e6;
                last*=10;
                last+= pc;
                arr[sz(arr)-1]=last;
                build %= (int)floor(1e6);
                if (last > 1e6) {
                    bool res = revisar(sz(arr)-1);
                    if (!res) {
                        flag = false;
                        break;
                    }
                    last=arr[sz(arr)-1];
                }
            }
            if (build >= last && divisions>1 && ((build == 0 && last==0)||i==n-1 || s[i+1]!='0')) {
                last = build;
                arr.push_back(build);
                
                build=0;
                divisions--;
            }
        }
        arr.push_back(build);
        ll cont = 0;
        for (auto q: arr) {
            if(q == 0) {
                cont++;
            } else {
                cont+=floor(log10(q))+1;
            }
        }


        if (build == 0 && sz(arr)!=n) {cout << -1;} else 
        if (flag && divisions==1 && sz(arr)==k && build >= last && cont==n) {
            rep(i,0,sz(arr)) {
                if (i!=0) cout << " ";
                cout << arr[i];
            }
        } else {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}