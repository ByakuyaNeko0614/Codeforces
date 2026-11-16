#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;
long long Mod = 1000000007;

//find(2, 5) correct = 32
//num=2, curr=5
//num=4, curr=2
//num=16, curr=1
//return 16?
ll find(ll num, ll curr){//find the val of num^curr)%mod
  ll rtnVal = 1;
  while(curr>0){
    if(curr%2==1) rtnVal=1LL*(num*rtnVal)%Mod;
    //num=2, curr=5, rtn = 2
    //num=4, curr=2, rtn = 2
    //num=16, curr=1, rtn = 16*2=32
    //return 32
    curr=1LL*curr/2;
    num=1LL*(num*num)%Mod;
  }
  /*for(ll i = 0; i < curr; i++){//TLE?
    rtnVal = 1LL*(rtnVal*num)%Mod;
  }*/
  return rtnVal;
}

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> po;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<ll> b = a;
  sort(b.begin(), b.end());
  if(n>=2&&b[n-1]==b[n-2]) {
    cout << "1" << "\n";
    return;}
  ll curr = 0;
  ll ans = 1;
  for(int i = n-1; i >=0; i--){
    if(i>0&&b[i]==b[i-1]) break;
    curr++;
    ans = 1LL*(ans+find(b[i]-1, curr))%Mod;
  }
  cout << 1LL*ans%Mod << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    w(t) solve();
    return 0;
}