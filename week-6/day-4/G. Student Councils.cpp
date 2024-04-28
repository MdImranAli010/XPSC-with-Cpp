// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

vector<long long> a;

bool good(long long k, long long x){
    long long tmp=x;
    x *= k;
    for(auto el : a)
        x -= min(tmp, el);
    return x<=0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x, n;
    cin>>x>>n;
    a.resize(n);
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }

    long long l=0, r=1e12, mid;
    while(l+1<r){
        mid=(l+r) / 2;
        if(good(x, mid)){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l;
    return 0;
}
