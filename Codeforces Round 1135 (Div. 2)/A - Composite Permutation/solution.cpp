#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  if(n<4){
    cout << "-1\n";
    return;}
  for(int i = 1; i <= n; i++){
    if(i==1) cout << 4 << " ";
    else if(i==4) cout << 1 << " ";
    else cout << i << " ";
  }
  cout <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    w(t) solve();
    return 0;
}