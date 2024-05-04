// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ar[n];
        map<int,int> a, b;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            a[ar[i]]++;
        }
        vector<int> vec;
        for (auto it = a.begin(); it != a.end(); it++) {
            int frst = it->first;
            int scnd = it->second;
            if (n>=frst) {
                for (int i = 1; i < scnd; i++) {
                    vec.push_back(frst);
                }
                b[frst] = 1;
            } 
            else {
                for (int i = 1; i <= scnd; i++) {
                    vec.push_back(frst);
                }
            }
        }
        int count= 1, result=0;
        for (int i = 0; i < vec.size(); i++) {
            for (int j = count; j <= n; j++) {
                if (b[j] == 1) {
                    count++;
                } 
                else {
                    break;
                }
            }
            int frst = (vec[i] - 1) / 2;
            if (frst >= count) {
                count++;
                result++;
            } 
            else {
                result = -1;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}
