// Author: Md. Imran Ali




#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        pbds<long long> st;
        long long crossings=0;
        for(int i=0; i<n; i++){
            crossings += i-st.order_of_key(v[i]);
            st.insert(v[i]);
        }
        cout<<crossings<<endl;
    }
    
    return 0;
}
