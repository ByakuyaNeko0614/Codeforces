#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;
  bool s = false, I = false, x = false;
  bool isValid = false;
  for(int i = 0; i < a.size(); i++) for(int j = 0; j < b.size(); j++) if(a[i]==b[j]){
   a.erase(i, 1), b.erase(j, 1), i--;
   break;}
  for(int i = 0; i < a.size(); i++){
    if(a[i]=='s'&&!s) s=true;
    else if(a[i]=='i'&&!I) I = true;
    else if(a[i]=='x'&&!x) x = true;
    else if(a.size()!=0) isValid = false;
    else isValid = false;
  }
  if(s&&I&&x&&a.size()==3&&b.empty()) cout << "YES" << "\n";
  else cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    w(t){
        solve();
    }
    return 0;
}