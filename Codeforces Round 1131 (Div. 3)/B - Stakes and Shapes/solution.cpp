#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int r, s, p;
  cin >> r >> s >> p;
  int times = r+s+p;
  string ans = "";
  for(int i = 0; i < times; i++){
    if(r>=s&&r>=p) ans+='P';
    else if(s>=r&&s>=p) ans+='R';
    else if(p>=r&&p>=s) ans+='S';
    else ans+='S';
  }
  cout << ans << "\n";
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