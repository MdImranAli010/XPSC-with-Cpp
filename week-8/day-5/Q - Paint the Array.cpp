// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long even=0, odd=0;
        for (int i = 0; i < n; i += 2) {
            even= __gcd(even, arr[i]);
        }
        for(int i = 1; i < n; i+=2) {
            odd= __gcd(odd, arr[i]);
        }

        int pos_even=1;
        for (int i = 1; i < n; i += 2) {
            if (arr[i] % even == 0) {
                pos_even = 0;
                break;
            }
        }

        if(pos_even){
            cout << even << endl;
            continue;
        }

        int pos_odd=1;
        for(int i = 0; i < n; i+=2){
            if(arr[i] % odd == 0){
                pos_odd=0;
                break;
            }
        }

        if(pos_odd){
            cout << odd << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    return 0;
}
