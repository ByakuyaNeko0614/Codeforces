#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> key(n);
    for(int i = 0; i < n; i++){
        cin >> key[i];
    }

    int limit = n - 4;
    vector<long long> st(limit);
    for(int i = 0; i < limit; i++){
        st[i] = key[i] + key[i + 2] - key[i + 4];
    }

    vector<long long> sortedSt = st;
    sort(sortedSt.begin(), sortedSt.end());
    long long ans = 0;
    long long count = 1;
    for(long long i = 1; i < sortedSt.size(); i++){
        if(sortedSt[i] == sortedSt[i-1]){
            count++;
        } else {
            ans += count*(count-1)/2;
            count = 1;
        }
    }
    ans += count*(count-1)/2;

    for(int i = 0; i < limit; i++){
        if(i + 2 < limit && st[i] == st[i + 2]){
            ans--;
        }
        if(i + 4 < limit && st[i] == st[i + 4]){
            ans--;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t>0) {
        solve();
        t--;
    }

    return 0;
}