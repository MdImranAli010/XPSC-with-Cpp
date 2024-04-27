// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

bool Achv_Median(vector<long long>& arr, int n, int b, long long median) {
    long long oper = 0;
    for (int i = n/2; i < n; i++) {
        if (arr[i] < median) {
            oper += (median-arr[i]);
            if (oper > b)
                return false;
        }
    }
    return true;
}

int main() {
    int n, b;
    cin >> n >> b;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    long long L = arr[n/2], H = 2e9, ans = L;
    while (L <= H) {
        long long mid = (L + H) / 2;
        if (Achv_Median(arr, n, b, mid)) {
            ans = mid;
            L = mid+1;
        } 
        else {
            H = mid-1;
        }
    }

    cout << ans << endl;

    return 0;
}
