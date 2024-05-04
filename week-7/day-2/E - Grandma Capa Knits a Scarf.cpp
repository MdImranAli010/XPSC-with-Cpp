// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string str;
        cin >> str;
        set<char> st;
        for (int i = 0; i < n; ++i) {
            st.insert(str[i]);
        }
        vector<long long> vec(26, LLONG_MAX);
        for (char a : st) {
            long long low = 0, high = n - 1, c = 0;
            while (high>low) {
                if (str[low] == str[high]) {
                    high--;
                    low++;
                    
                }
                else {
                    if (str[high] == a) {
                        high--;
                        c++;
                    }
                    else if (str[low] == a) {
                        low++;
                        c++;
                    }
                    
                    else {
                        c = -1;
                        break;
                    }
                }
            }
            if (c != -1)
                vec[a - 'a'] = c;
        }
        sort(vec.begin(), vec.end());
        if (vec[0] == LLONG_MAX){
            cout << "-1"<<endl;
        }
        else{
            cout << vec[0] <<endl;
        }
    }
    return 0;
}
