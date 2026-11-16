#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> diff(n+1, 0);
    vector<int> pre(n+1, 0);
    a[0]=0, pre[0]=0;
    int po = 2;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i>=2){
            diff[i]=abs(a[i-1]-a[i]);
            pre[i]=max(pre[i-1], diff[i]);
            if(diff[i]>diff[po]) po=i;
        }
    }
    vector<int> suf(n+3, 0);
    for(int i = n; i >=2; i--){
        suf[i] = max(suf[i+1], diff[i]);
    }

    //GPT
    int ans = pre[n];
    int maxindex=-1;
    for(int i = po; i <= n; i++){
        if(i!=po) maxindex=max(maxindex, 2*diff[i]);
        int curr = max({maxindex, pre[po-1], suf[i+2], abs(a[po-1]-2*a[i])});
        if(i!=n) curr = max(curr, abs(2*a[po]-a[i+1]));
        ans=min(ans, curr);
    }
    maxindex = -1;
    for(int i = po-1; i >=1; i--){
        if(i!=po-1) maxindex = max(maxindex, 2*diff[i+1]);
        int curr = max({maxindex, pre[i-1], suf[po+1],  abs(2*a[i]-a[po])});
        if(i!=1) curr=max(curr, abs(a[i-1]-2*a[po-1]));
        ans=min(ans, curr);
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