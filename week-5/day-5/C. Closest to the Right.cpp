// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long x;
    for (int i = 0; i < q; i++) {
        cin >> x;
        int idx=lower_bound(arr.begin(), arr.end(), x)-arr.begin();
        cout<<idx+1<<endl;
    }
    
    return 0;
}
