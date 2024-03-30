                                      // Author: Md. Imran ALi


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--){
        int n;
        string s;
        cin>>n>>s;
        
        long long ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                ans += i;
            }
            else{
                ans += n-i-1;
            }
        }
        long long cnt=0, recent_cnt=0;
        for(int l=0, r=n-1; l<=n/2, r>=n/2; l++, r--){
            if(s[l]=='L'){
                recent_cnt++;
                ans -= l;
                ans += n-l-1;
            }
            if(recent_cnt>cnt){
                cnt=recent_cnt;
                cout<<ans<<" ";
            }
            if(s[r]=='R'){
                recent_cnt++;
                ans += r;
                ans -= n-r-1;
            }
            if(recent_cnt>cnt){
                cnt=recent_cnt;
                cout<<ans<<" ";
            }
        }
        for(int i=1; i<=n-cnt; i++){
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}


