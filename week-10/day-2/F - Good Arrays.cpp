// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
    
        long long a = 0;
        long long b = 0;
    
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
    
            if (x == 1)
                a += 2;
            else
                a++;
            b += x;
        }
    
        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }
        if(a <= b) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
