// Author: Md. Imran Ali




#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> vec[26];
    
    for (int i=0; i<n; i++){
        vec[s[i] - 'a'].push_back(i);
    }

    reverse(s.begin(), s.end());

    long long min_cnt=0;
    pbds<int> pb;
    int count[26]={0};

    for(int i=0; i<n; i++){
        int x, y, mini;
        x = s[i] - 'a';
        y = vec[x][count[x]++];
        pb.insert(y);
        mini=pb.order_of_key(y);
        y -= mini;
        min_cnt += y;
    }
    
    cout<<min_cnt<<endl;

    return 0;
}
