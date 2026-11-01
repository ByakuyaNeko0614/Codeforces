#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  bool isValid = false;
  int ans = 0;
  bool mid = false;
  for(int i = 0; i < n; i++){
    int st = 0;
    cin >> st;
    if(st!=1) isValid=true;
    if(i>0&&i<n-1&&st!=1) mid = true;
    ans+=st;
  }
  if(!isValid){ cout << "-1" << "\n";
  return 0;}
  if(isValid&&mid){ cout << ans-1 << "\n";
  return 0;}
  cout << ans-n+1 << "\n";
  return 0;
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