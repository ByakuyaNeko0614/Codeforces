#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    cout << "? 1 " << n << endl;
    int one;
    cin >> one;
    if(one==-1) exit(0);
    if(one==0||one==n){
        cout << "! NO" << endl;
        return;
    }
    cout << "? 1 " << one << endl;
    int suf;
    cin >> suf;
    if(suf==-1) exit(0);
    cout << (suf == one ? "! NO" : "! YES") << endl;
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