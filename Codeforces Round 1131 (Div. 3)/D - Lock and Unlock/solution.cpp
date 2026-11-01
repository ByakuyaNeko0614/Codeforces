#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n, 0);
  bool isValid = false;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 1; i < n; i++) if(a[i]!=a[i-1]){
    isValid = true;
    break;
  }
  sort(a.begin(), a.end());
  ll cost = 0, op = 0;
  for(int i = 1; i < n; i++){
    ll diff = a[i]-a[i-1];
    cost+=diff*min(i, n-i);
  }
  op = a[n-1]-a[0];
  if(!isValid) cout << "0 0\n";
  else cout << cost << " " << op << "\n";
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