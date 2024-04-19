// Author: Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r, x;
    cin>>n>>l>>r>>x;
    vector<int> c(n);
    for (int i=0; i<n; i++){
        cin>>c[i];
    }

    int ans=0;
    for(int i=0; i<(1<<n); i++){
        int mn=INT_MAX, mx=INT_MIN, cnt=0, sum=0;
        for(int j=0; j<n; j++){
            if ((i & (1<<j)) != 0){
                cnt++;
                sum += c[j];
                mn=min(mn, c[j]);
                mx=max(mx, c[j]);
            }
        }
        
        int a=mx-mn;
        if(a >=x && sum >=l && sum <=r && cnt >=2){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
