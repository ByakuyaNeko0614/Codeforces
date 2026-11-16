#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> seen(n, false);
    ll ans = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int po = 0;
    ll curr = 0;
    vector<ll> left;
    for(int i = 0; i < n; i++){
        if(a[i]>curr&&!seen[i]){
            curr=a[i];
            seen[i]=true;
            ans++;
            left.push_back(a[i]);
        }
    }
    vector<ll> right;
    curr = 0;
    for(int i = 0; i < n; i++){
        if(a[i]>curr&&!seen[i]){
            curr=a[i];
            seen[i]=true;
            ans++;
            right.push_back(a[i]);
        }
    }
    reverse(right.begin(), right.end());
    vector<ll> middle;
    for(int i = 0; i < n; i++) if(!seen[i]) middle.push_back(a[i]);
    cout << ans << "\n";
    for(int i = 0; i < left.size(); i++){
        cout << left[i] << " ";
    }
    for(int i = 0; i < middle.size(); i++){
        cout << middle[i] << " ";
    }
    for(int i = 0; i < right.size(); i++){
        cout << right[i] << " ";
    }
    cout << "\n";
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