// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin>>n>>k;
    
    vector<long long> a(n);
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }

    for(long long i=0; i<k; i++){
        long long x;
        cin>>x;
        auto it=upper_bound(a.begin(), a.end(), x);
        cout<<it-a.begin()<<endl;
    }
    
    return 0;
}
