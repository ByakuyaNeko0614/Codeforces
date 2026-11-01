#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int zeroes = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            zeroes++;
        }
    }

    if (zeroes < 2) {
        cout << -1 << "\n";
        return;
    }

    int bad = 0;
    if (a[0] == 1) bad++;
    if (a[n - 1] == 1) bad++;

    cout << bad << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}