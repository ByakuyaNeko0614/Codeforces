#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int count = 0;
  for(int i = n-1; i >= 0; i--){
    if(a[i]==a[n-1]) count++;
    else break;
  }
  // 1 1 2 2, k=2 => 2* 2* 1 1
  // 1 2 3 3, k=2 => 3* 3* 2 1
  if(count>k){
    cout << "NO" <<"\n";
    return;
  }
  // 1 2 3 4 5 6, k=2 => 5* 6* 4 3 2 
  // 2 5 6 8 12 36, k=2 => 12* 36* 8 6 5 2 
  cout << "YES" << "\n";
  for(int i = n-k; i < n; i++){
    cout << a[i] << " ";
  }
  for(int i = n-k-1; i >= 0; i--){
    cout << a[i] << " ";
  }
  cout << "\n";
  /*cout << a[n-k] << " ";
  for(int i = n-k; i >= 0; i--){
    cout << a[i] << " ";
  }
  for(int i = n-k+1; i < n-1; i++){
    cout << a[i] << " ";
  }
  cout << "\n";*/
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