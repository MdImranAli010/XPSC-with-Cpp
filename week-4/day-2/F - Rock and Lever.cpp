// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> T;
    while(T--){
        long long n;
        cin>>n;
        long long a;
        map<long long, long long> cnt;
        for(long long i=0; i<n; i++){
            cin>>a;
            long long k=0;
            while(a >=(1LL << k)){
                k++;
            }
            cnt[k]++;
        }
        long long ans=0;
        for(auto e : cnt){
            ans +=(e.second * (e.second-1)) / 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
