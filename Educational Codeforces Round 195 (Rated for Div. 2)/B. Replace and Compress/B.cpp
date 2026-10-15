#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1;
    bool keep = 0, change = 0;
    for(int i = 1; i < n-1; i++){
        if(s[i-1]==s[i]&&s[i]==s[i+1]) keep=1;
        if(s[i-1]==s[i+1]&&s[i]!=s[i-1]) change=1;
    }
    ans += keep+change;
    cout << ans << '\n';
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