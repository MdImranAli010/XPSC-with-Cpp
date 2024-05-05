// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

const long long MOD =1e9+7;

long long pow_mod(long long x, long long y, long long p){
    long long res=1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
        }
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        
        long long ans=0;
        long long power=1;
        while(k>0){
            if(k & 1){
                ans=(ans+power) % MOD;
            }
            power=(power*n) % MOD;
            k=k>>1;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
