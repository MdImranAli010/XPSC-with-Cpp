                                                // Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long l = 0, r = 0;

    long long sum = 0, ans = 0;
    while (r < n) {
        sum += a[r];
        while (sum > s) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans << endl;

    return 0;
}
