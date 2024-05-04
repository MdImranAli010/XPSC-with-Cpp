// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1'){
                cnt++;
            }
        }

        int new_cnt = n-cnt;
        int result=min(cnt, new_cnt);
        
        if (result % 2 == 0) {
            cout << "Ramos" << endl;
        }
        else {
            cout << "Zlatan" << endl;
        }
    }

    return 0;
}
