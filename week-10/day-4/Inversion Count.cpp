// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    
        pbds<pair<int, int>> p;
    
        long long ans=0;
        for(int i=n-1; i>=0; i--){
            ans += p.order_of_key({arr[i], 0});
            p.insert({arr[i], i});
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
