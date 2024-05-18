// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, q;
    long long curr, tkt;
    cin >> t >> q;
    map<long long, int, greater<long long>> tkts;

    while (t--) {
        cin >> tkt;
        tkts[tkt]++;
    }

    while (q--) {
        cin>>curr;
        auto it=tkts.lower_bound(curr);
        if (it == tkts.end()) {
            cout << -1 << endl;
        }
        else {
            cout << it->first << endl;
            if (--(it->second) == 0) {
                tkts.erase(it);
            }
        }
    }

    return 0;
}
