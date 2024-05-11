// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, x=1;
    cin >> n;
    
    vector<long long> v(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<long long> v1(1e5+5, 0);
    for (int i = 1; i <= n; i++) {
        for (int j=1; j*j <= v[i]; j++) {
            if (v[i] % j == 0) {
                v1[j]++;
                if (j != v[i] / j) {
                    v1[v[i] / j]++;
                }
            }
        }
    }

    for (int i=2; i <= 100000; i++){
        x=max(x, v1[i]);
    }

    cout<<x;
    
    return 0;
}
