#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> arr(2, vector<int>(n, 0));
    int up = 0, down = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            char x;
            cin >> x;
            if(x=='f'){
                if(i==0) up++;
                else down++;
            }
        }
    }
    int ans = 0;
    if(up%2!=down%2) ans = 1;
    /*string state(n, 'B');
    for(int i = 0; i < n; i++){
        if(arr[0][i]>0&&arr[1][i]==0) state[i] = 'U';
        else if(arr[0][i]==0&&arr[1][i]>0) state[i] = 'D';
    }
    for(int i = 1; i < n; i++){
        if(state[i-1]=='U'&&state[i]=='D'){
            state[i-1]='B', state[i]='B';
        } else if(state[i-1]=='D'&&state[i]=='U'){
            state[i-1]='B', state[i]='B';
        } else if(state[i-1]=='D'&&state[i]=='D'){
            state[i-1]='B', state[i]='B';
        } else if(state[i-1]=='U'&&state[i]=='U'){
            state[i-1]='B', state[i]='B';
        }
    }
    for(int i = 0; i < n; i++){
        if(state[i]!='B') ans++;
    }*/
    cout << ans << "\n";
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