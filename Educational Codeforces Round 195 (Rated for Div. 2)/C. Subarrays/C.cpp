#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    long long ans = 0;
    for(int i = 0; i < n; i++) cin >> a[i], a[i] %= k;
    vector<long long> sum(n+1, 0);
    for(int i = 1; i <= n; i++) sum[i] = (sum[i-1]+a[i-1])%k;
    vector<int> count(k, 0);
    for(int i = k+1; i <= n; i++){
        count[sum[i-k-1]]++;
        ans+=count[sum[i]];
    }
    cout<< ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}