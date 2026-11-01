#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n, 0);
  long long maxx = LLONG_MAX;
  for(int i = 0; i < n; i++){
    ll x;
    cin >> x;
    maxx = min(x, maxx);
  }
  if(maxx < n) cout << n << "\n";
  else cout << 0 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    w(t){
        solve();
    }
    return 0;
}