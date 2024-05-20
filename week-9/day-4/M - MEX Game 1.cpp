// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> ara(n);
        vector<int> cnt(n+1, 0);
        
        for(int i=0; i<n; i++){
            cin>>ara[i];
            cnt[ara[i]]++;
        }
        
        if(cnt[0]==0){
            cout<<0<<endl;
            continue;
        }
        
        int miss_num=-1;
        for(int i=1; i<=n; i++){
            if(cnt[i]==0){
                miss_num=i;
                break;
            }
            if(cnt[i]==1 && cnt[0]==1){
                miss_num=i;
                break;
            }
            if(cnt[i]==1){
                if(miss_num==-1){
                    miss_num=i;
                }
                else{
                    miss_num=i;
                    break;
                }
            }
        }
        cout<<miss_num<<endl;
    }
    
    return 0;
}
