// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

int odd_subarray(vector<int>& A, int N, int K) {
    int odd_array_cnt = 0;
    int odd_count = 0;
    for (int i = 0; i < K; ++i) {
        if (A[i] % 2 != 0) {
            ++odd_count;
        }
    }

    if (odd_count > 0) {
        ++odd_array_cnt;
    }
    for (int i = K; i < N; ++i) {
        if (A[i - K] % 2 != 0) {
            --odd_count;
        }
        if (A[i] % 2 != 0) {
            ++odd_count;
        }
        if (odd_count > 0) {
            ++odd_array_cnt;
        }
    }

    return odd_array_cnt;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int rslt = odd_subarray(A, N, K);
        cout << rslt << endl;
    }

    return 0;
}
