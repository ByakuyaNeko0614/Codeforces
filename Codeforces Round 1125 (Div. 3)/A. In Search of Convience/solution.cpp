#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, target;
    cin >> x >> y >> target;
    cout << x << ' ' << y - target << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t>0) {
        solve();
        t--;
    }
    
    return 0;
}