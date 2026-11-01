#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  int ans=0;
  vector<int> a(n+1, 0);
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    a[x]++;
  }
  int curr=0;
  for(int i = 0; i < n; i++){
    if(a[i]==0 || curr+a[i]<k){
        break;
    }
    curr+=a[i]-k;
    ans++;
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