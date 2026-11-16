#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    char curr = 'R';
    for(int i = 0; i < n; i++){
        if(curr!=s[i]){
            ans++;
            curr = s[i];}
        if(curr=='R'){
            curr='B';
        }else curr='R';
    }
    cout << ans << "\n";
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