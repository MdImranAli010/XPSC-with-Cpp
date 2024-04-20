// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0; i<n; i++){
            cin>>a[i];
        }
        vector<long long> vec_for_bit(30, 0);
        
        for(long long i = 0; i <= 29; i++){
            long long num = (1ll << i);
            for(long long j = 0; j < n; j++){
                if((a[j] & num) != 0){
                    vec_for_bit[i]++;
                }
            }
        }
        for(long long k=1; k<=n; k++){
            bool flag=false;
            for(long long i=0; i<=29; i++){
                if((vec_for_bit[i] % k) != 0){
                    flag=true;
                    break;
                }
            }
            if(!flag){
                cout<<k<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}
