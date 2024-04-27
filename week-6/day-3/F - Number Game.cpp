// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int Number_Game() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &l : vec) {
        cin >> l;
    }

    sort(vec.begin(), vec.end());
    int result = 0;

    for (int i = n; i >= 0; i--) {
        int cnt = 0;
        int i1 = i;

        vector<int> res = vec;
        int L = 0;
        int H = n - 1;
        int stp = 1;

        while (H >= L) {
            int req = i1 + 1 - stp;

            while (H >= 0 && res[H] > req) {
                H--;
            }

            if (stp >= i) {
                result = i;
            }

            if (H < 0 || H < L) {
                break;
            }

            if (res[H] <= req) {
                H--;
                res[L] += req;
                L++;
                stp++;
            }
        }

        if (stp >= i + 1) {
            result = max(result, i);
            break;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << Number_Game() << endl;
    }
    return 0;
}
