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
        long long n;
        cin>>n;
        vector<pair<long long, long long>> v;
        for(int i=0; i<n; i++){
            pair<long long, long long> p;
            cin>>p.first>>p.second;
            v.push_back(p);
        }

        sort(v.begin(), v.end());

        pbds<long long> st;
        for(int i=0; i<n; i++) {
            st.insert(v[i].second);
        }

        long long res=0;
        for(int i=0; i<n; i++){
            long long val=v[i].second;
            res=res+st.order_of_key(val);
            st.erase(val);
        }
        cout<<res<<endl;
    }

    return 0;
}
