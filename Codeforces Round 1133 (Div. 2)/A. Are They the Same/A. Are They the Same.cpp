#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(2, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b[x%2]++;
    }
    for(int i = 0; i < n; i++){
        if(abs(a[i]%2)==0&&b[0]>0){
            b[0]--;
        } else if(abs(a[i]%2)==1&&b[1]>0){
            b[1]--;
        } else if(abs((a[i]-k)%2)==0&&b[0]>0){
            b[0]--;
        }else if(abs((a[i]-k)%2)==1&&b[1]>0){
            b[1]--;
        } else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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