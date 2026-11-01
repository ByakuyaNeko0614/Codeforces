#include <bits/stdc++.h>
using namespace std;

int curr(vector<int> a, int k){
    int n = a.size();
    vector<int> res(n);
        vector<bool> seen(n+1, 0);
        int mex = 0;
        for(int i = 0; i < n; i++){
            seen[a[i]] = true;
            while(seen[mex]) mex++;
            res[i] = mex;
        }
        sort(res.begin(), res.end(), greater<int>());
        return res[k-1];
    }

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int mex = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int best = curr(a, k);
    int ansA = -1, ansB = -1;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            swap(a[i], a[j]);
            int now = curr(a, k);
            if(now > best) ansA = i+1, ansB = j+1, best = now;
            swap(a[i], a[j]);
        }
    }
    if(ansA==-1) cout << "-1\n";
    else cout << ansA << " " << ansB << "\n";
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