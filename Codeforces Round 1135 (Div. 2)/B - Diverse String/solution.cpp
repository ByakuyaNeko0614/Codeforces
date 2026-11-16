#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  //max ans = n(n-1)/2)+1
  int zero = 0;
  int one = 0;
  for(int i = 0; i < n; i++){
    if(s[i]=='1') one++;
    else zero++;
  }
  int a = max(0, min(one, zero)-k);
  int b = n-a;
  ll ans = 1LL*a*(a+1)/2;
  ans+=1LL*b*(b+1)/2;
  cout << 1LL*ans+1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    w(t) solve();
    return 0;
}