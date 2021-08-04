#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
int n, m, cnt = 0;
vector<int> ans;
vector<bool>used;
void rec(int idx) {
    if(idx == n) {
        ++cnt;
        if(cnt == 4468) {
            for(int i = 0; i < n; ++i)
                cout  << ans[i] << " ";
            cout << "\n";
        }
        return;
    }
    for(int  i = 1; i <= n; ++i) {
        if(used[i])
            continue;
        ans[idx] = i;
        used[i] = true;
        rec(idx+1);
        used[i] = false;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n;
    ans.resize(n);
    used.assign(n+1,0);
    rec(0);
    return 0;
}

