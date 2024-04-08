// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin>>T;
    while(T--){
        int n, ans=0, x;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            ans|=x;
        }
        cout<<ans<<endl;
    }

    return 0;
}
