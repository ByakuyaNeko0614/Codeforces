#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll, int> mp;
    sort(a.begin(), a.end());
    int banis = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = i; j < n; j++){
            if(a[j]%a[i]==0) count++;
        }
        banis=max(banis, count);
    }
    cout << n-banis << "\n";
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