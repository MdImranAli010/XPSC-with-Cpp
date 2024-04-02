                                                // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
set<int> st[N];

void train_queries() {
    map<int, int> mp;
    int n, test;
    cin >> n >> test;
    mp.clear();
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (mp.find(x) == mp.end()) {
            mp[x] = ++cnt;
        }
        st[mp[x]].insert(i);
    }

    while (test--) {
        int x, y;
        cin >> x >> y;

        if (mp.find(x) == mp.end() || mp.find(y) == mp.end()) {
            cout << "NO" << endl;
            continue;
        }

        int pos = *st[mp[x]].begin();
        if (st[mp[y]].lower_bound(pos) == st[mp[y]].end()) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
        }
    }

    for (int i = 1; i <= cnt; i++) {
        st[i].clear();
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        train_queries();
    }

    return 0;
}
