// Author: Md. Imran Ali




#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> tmp=arr;
    sort(tmp.begin(), tmp.end());

    for (int i = 0; i < n; i++) {
        arr[i]=lower_bound(tmp.begin(), tmp.end(), arr[i])-tmp.begin()+1;
    }

    long long ans=0;
    pbds<int> st;

    for(int i=n-1; i>=0; i--){
        int sml=st.order_of_key(arr[i]);
        int grtr= i-(arr[i]-sml-1);
        ans += (long long)sml*grtr;
        st.insert(arr[i]);
    }

    cout<<ans<<endl;
    
    return 0;
}
