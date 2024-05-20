// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

void Find_the_Car() {
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> vec_a(k + 1), vec_b(k + 1);
    vec_a[0] = vec_b[0] = 0;
    for (int i = 1; i <= k; i++) {
        cin >> vec_a[i];
    }
    for (int i = 1; i <= k; i++) {
        cin >> vec_b[i];
    }

    vector<long long> desti(k + 1), tm(k + 1);
    for (int i = 1; i <= k; i++) {
        desti[i] = desti[i - 1] + (vec_a[i] - vec_a[i - 1]);
        tm[i] = tm[i - 1] + vec_b[i];
    }

    while (q--) {
        long long d;
        cin >> d;
        int ind = lower_bound(vec_a.begin(), vec_a.end(), d) - vec_a.begin();

        if (vec_a[ind] == d) {
            cout << vec_b[ind] << " ";
        }
        else {
            long long dist = vec_a[ind] - vec_a[ind - 1];
            long long time = vec_b[ind] - vec_b[ind - 1];
            long long x = d - vec_a[ind - 1];
            cout << ((x * time) / dist) + vec_b[ind - 1] << " ";
        }
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        Find_the_Car();
    }
    
    return 0;
}
