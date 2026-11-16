#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    ll curr = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i=i+k+1){
        curr+=a[i];
    }
    cout << (curr%2 ? "Alice\n" : "Bob\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}