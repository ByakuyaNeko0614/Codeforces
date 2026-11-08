#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int ans = 0;
    if(a <= 0 && b >= 0){
        cout << max(0, abs(a+b)-1) << "\n";
    } else {
        cout << b-a << "\n";
    }
}
    /*for(int i = a; i <= b; i++){
        sum+=i;
    }
    int ans = 0;
    for(int i = a; i < b; i++){
        if(sum==i) break;
    }
    for(int i = a; i < b; i++){
        if(sum==i) break;
        ans++;
        int x = (sum-a);
        int y = (sum-b);
        if(x<y) sum-=b, b--, ans++;
        else sum-=a, a++, ans++;
    }*/

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