                                            // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n, res=0;
        cin>>n;
        while(n){
            res += n;
            n /= 2;
        }
        cout<<res<<endl;
    }
    return 0;
}





