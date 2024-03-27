                                          // Author: Imran Ali



#include <bits/stdc++.h>
using namespace std;

const int N = 1000007;

int main() {
    int min_num[N];
    for(int i=1, j=0; i<=N; i=i<<1, j++){
        min_num[i]=j;
    }

    int tmp=0;
    for(int i=1; i<=N; i++){
        if(min_num[i]){
            tmp=min_num[i]+1;
        }
        else{
            min_num[i] = tmp;
        }
    }
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, a;
        map<int, int> mp;
        mp.clear();
        m=0;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a;
            mp[a]++;
            if(mp[a] > m) 
                m=mp[a];
        }
        int ans=min_num[int(ceil(1.0 * n / m))] + n-m;
        
        cout<<ans<<endl;
    }
    return 0;
}
