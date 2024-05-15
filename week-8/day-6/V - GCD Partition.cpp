// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int v[n];
        long long pref[n];
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i==0){
                pref[i]=v[i];
            }
            else{
                pref[i]=pref[i-1] + v[i];
            }
        }
        long long ans=0;
        for(int i=1; i<n; i++){
            ans=max(ans, __gcd(pref[i-1], pref[n-1] - pref[i-1]));
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
