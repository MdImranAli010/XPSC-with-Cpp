// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int left=0, rgt=0;
    pbds<pair<int, int>> p;

    while(rgt<n){
        p.insert({arr[rgt],rgt});
        if(rgt-left+1==k){
            int pos=k/2;
            if(k%2==0){
                pos--;
            }
            auto it=p.find_by_order(pos);
            cout<<it->first<<" ";
            p.erase({arr[left],left});
            left++;
        }
        rgt++;
    }

    cout << endl;
    
    return 0;
}
