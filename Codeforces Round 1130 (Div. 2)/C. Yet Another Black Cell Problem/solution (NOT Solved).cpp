#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*void find(vector<ll> a, int k, int n){
    int i = 1;
    ll curr = a[0];
    ll count = 0;
    while(curr < a[n-1] && count < k){
        if(curr+k >= a[i]) curr = a[i], i++;
        else count++, curr += k;
    }
}*/

bool check(vector<ll> dist, int x, int k){
    int curr = dist[1];
    int count = 0;
    for(int i = 1; i < dist.size()-1; i++){
        if(curr+k>=dist[i+1]) curr = dist[i+1];
        else curr += k, count++;
        if(count > x) break;
    }
    if(count > x) return false;
    else return true;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> dist(n);
    int ans = 0;
    for(int i = 1; i < n; i++) dist[i] = a[i] - a[i-1];
    for(ll i = 1; i < LLONG_MAX; i++){
        if(!check(dist, x, i)) continue;
        else {
            ans = i;
            break;}
    }
    /*if(count < k) ans = k;
    else k++, find(a, k, n);*/
    cout << ans << "\n";
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