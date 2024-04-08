// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(int i=1; i<=n; i++){
            long long x;
            cin>>x;
            ans^=x;
        }
        
        if(n%2==0){
            if(ans==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
