#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  ll x=0, y=0;
  sort(a.begin(), a.end(), greater<ll>());
  for(int i = 0; i < n; i++){
    if(x<y){
        x+=pow(2, a[i]);
    }else y+=pow(2, a[i]);
  }
  cout << x*y << "\n";
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