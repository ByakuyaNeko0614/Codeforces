#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;
int mmax = 199910;
vector<bool> prime(mmax, true);
vector<int> nextP(mmax, 0);
void initilize(){
  prime[0]=false;
  prime[1]=false;
  for(int i = 2; i*i<=mmax; i++){
    for(int j=i*i; j < mmax; j+=i) prime[j]=false;
  }
  int last = 0;
  for(int i = mmax-1; i >=2; i--){
    if(prime[i]) last=i;
    nextP[i]=last;
  }
}

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    a[i]=nextP[a[i]];
  }
  for(int i = 0; i < n; i++){
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    initilize();
    w(t){
        solve();
    }
    return 0;
}