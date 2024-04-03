// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
const int N=2e5+7;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> size(n+1, 0);
        vector<int> grow[N];
        for(int i=1; i<=n; i++){
            grow[i].clear();
        }
        for(int i=1; i<n;i++){
            int a, b;
            cin>>a>>b;
            grow[a].push_back(b);
            grow[b].push_back(a);
        }
        function<void(int, int)> dfs=[&](int u, int fa){
            bool fg=true;
            for(auto &j : grow[u]){
                if(j==fa){
                    continue;
                }
                fg=false;
                dfs(j,u);
                size[u]+=size[j];
            }
            size[u]+=fg;
        };
        dfs(1,-1);
        int m;
        cin>>m;
        while(m--){
            int x, y;
            cin>>x>>y;
            long long pair=(long long)size[x]*size[y];
            cout<<pair<<endl;
        }
    }
    return 0;
}
