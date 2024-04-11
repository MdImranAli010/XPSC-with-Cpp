// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

void boxes(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    long long xr=a[0];
    long long ans=1;
    for(int i=1;i<n;i++){
        if(xr>=a[i]){
            xr=xr^a[i];
        }
        else{
            xr=a[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        boxes();
    }
    return 0;
}
