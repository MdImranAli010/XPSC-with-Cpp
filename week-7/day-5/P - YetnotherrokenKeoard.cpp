// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> s;
        n = s.size();

        vector<int> upper, lower;
        vector<bool> vec(n + 2);
        fill(vec.begin(), vec.end(), true);

        for(int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (!upper.empty()) {
                    vec[upper.back()] = false;
                    upper.pop_back();
                }
                vec[i] = false;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                upper.push_back(i);
            }
            else if (s[i] == 'b') {
                if (!lower.empty()) {
                    vec[lower.back()] = false;
                    lower.pop_back();
                }
                vec[i] = false;
            }
            else {
                lower.push_back(i);
            }
        }

        for (int i = 0; i < n; i++) {
            if (vec[i]==true){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}

