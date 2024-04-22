// Author: Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        string str;
        cin >> str;
        
        int length = str.size();
        int ans = 0;
        int freq[128] = {0};
        
        for(int i = 0; i < (length/2); i++) {
            if(freq[str[i]] == 0) {
                ans++;
            }
            freq[str[i]]++;
        }
        
        if(ans > 1) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
