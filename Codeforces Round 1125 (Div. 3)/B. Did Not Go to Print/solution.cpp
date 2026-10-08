#include <bits/stdc++.h>
using namespace std;

int solve() {
    int nums;
    cin >> nums;
    string s;
    cin >> s;
    vector<int> ans(nums+1, 0);
    vector<int> st;

    for(int i = 0; i < nums; i++){
        if (s[i] == '1'){
            st.push_back(i+1);
        } else if(s[i] == '2'){
            if (!st.empty()){
                ans[st.back()] = 1;
                st.pop_back();
            } else {
                ans[i+1] = 1;
            }
        } else {
            ans[i+1] = 1;
        }
    }

    int count = 0;
    for(int i = 1; i <= nums; i++){
        if(ans[i] == 0){
            count++;
        }
    }

    cout << count << "\n";

    for(int i = 1; i <= nums; i++){
        if(ans[i] == 0){
            cout << i << " ";
        }
    }

    cout << "\n";
    return 0;
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