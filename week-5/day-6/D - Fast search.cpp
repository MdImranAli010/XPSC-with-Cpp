// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
 
    cin>>k;
    for (int i = 0; i < k; ++i) {
        int l, r;
        cin>>l>>r;
        int left=lower_bound(a.begin(), a.end(), l)-a.begin();
        int right=upper_bound(a.begin(), a.end(), r)-a.begin() - 1;

        cout << max(0, right-left + 1) <<" ";
    }
    cout << '\n';
    
    return 0;
}
