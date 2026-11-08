#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int a;
  cin >> a;
  int x = 0, y = 0;
  if(a%2==1){
    x=a/2, y=a/2+1;
  } else {
    x = a/2, y=x;
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