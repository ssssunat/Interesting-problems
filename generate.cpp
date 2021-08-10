#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
int n, m, cnt = 0;
vector<char>a;
void rec(int idx, int bal) {
    if(bal > 2 * n - idx)
        return;
    if(idx == 2 * n) {
        if(bal == 0) {
            ++cnt;
            if(cnt ==  8644) {
                for(int i = 0; i  < 2 * n; ++i)
                    cout << a[i];
                cout << "\n";
            }
        }
        return;
    }
    a[idx] = '(';
    rec(idx + 1, bal + 1);
    if(bal == 0)
        return;
    a[idx] = ')';
    rec(idx+1, bal - 1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n ;
    a.resize( 2 * n);
    rec(0,0);

    return 0;
}
