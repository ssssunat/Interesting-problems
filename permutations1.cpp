#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
int n, m, cnt = 0;
vector<int> ans;
void rec(int idx) {
    if(idx == n) {
        ++cnt;
        if(cnt == 6659) {
            for(int i = 0; i < n; ++i)
                cout  << ans[i] << " ";
            cout << "\n";
        }
        return;
    }
    for(int  i = 1; i <= m; ++i) {
        ans[idx] = i;
        rec(idx+1);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    ans.resize(n);
    rec(0);
    return 0;
}

