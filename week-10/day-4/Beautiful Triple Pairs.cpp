// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        long long res=0;
        unordered_map<long long, long long> ab;
        unordered_map<long long, long long> bc;
        unordered_map<long long, long long> ac;
        
        unordered_map<long long, long long> ab_1;
        unordered_map<long long, long long> bc_1;
        unordered_map<long long, long long> ac_1;
 
        for(int i=0; i<n-2; i++){
            long long a = v[i];
            long long b = v[i+1];
            long long c = v[i+2];
            
            long long idx_ab=a*n+b;
            long long idx_bc=b*n+c;
            long long idx_ac=a*n+c;
            
            long long idx_ab_1=a*n*n + b*n + c;
            long long idx_bc_1=b*n*n + c*n + a;
            long long idx_ac_1=a*n*n + c*n + b;
 
            ab[idx_ab] += 1;
            bc[idx_bc] += 1;
            ac[idx_ac] += 1;
            ab_1[idx_ab_1] += 1;
            bc_1[idx_bc_1] += 1;
            ac_1[idx_ac_1] += 1;
 
            res += ab[idx_ab]-ab_1[idx_ab_1];
            res += bc[idx_bc]-bc_1[idx_bc_1];
            res += ac[idx_ac]-ac_1[idx_ac_1];
        }
        
        cout << res << endl;
    }
 
    return 0;
}
