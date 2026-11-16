#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    vector<int> a(3);
    for(int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(a[0]-a[1]==-1&&a[1]-a[2]==-1){
        cout << "YES\n";
    }else cout << "NO\n";
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