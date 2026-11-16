#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char>right;
    vector<char>left;
    vector<char>right2(n/2);
    vector<char>left2(n/2);
    for(int i = 0; i < n/2; i++) left2[i]=s[i];
    for(int i = 0; i < n/2; i++) right2[i]=s[n-1-i];
    int ans = 0;
    bool check[26]={false};
    for(int i = 0; i < n/2; i++){
        if(left2[i]!=right2[i]) right.push_back(right2[i]), left.push_back(left2[i]);
    }
    for(int i = 0; i < left.size(); i++){
        int mm = min(left[i], right[i]) - 'a';
        int MM = max(left[i], right[i]) - 'a';
        for(int i = mm+1; i <= MM; i++){
            check[i]=true;
        }
    }
    for(int i = 0; i < 26; i++) if(check[i]) ans++;
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