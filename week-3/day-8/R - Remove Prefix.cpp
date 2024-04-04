// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N=1e3+1, M=1e18;

vector<int> val(N, M);

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& i:a){
            cin>>i;
        }
        set<int> count;
        reverse(a.begin(), a.end());
        
        for(auto& i:a){
            if(!count.insert(i).second){
                break;
            }
        }
        int rmv_prfx=n-count.size();
        
        cout<<rmv_prfx<<endl;

    }

    return 0;
}
