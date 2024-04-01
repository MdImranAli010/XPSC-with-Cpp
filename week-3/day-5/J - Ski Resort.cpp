                                            // Author: Md. Imran Ali


#include <iostream>
#include <vector>
#define Zeoy std::ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0)

using namespace std;

void ski() {
    long long n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long ans = 0, len = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= q) {
            len++;
            if (len >= k){
                ans += len - k + 1;
            }
        } 
        else {
            len = 0;
        }
    }

    cout << ans << endl;
}

int main() {
    Zeoy;
    int t;
    cin >> t;
    while (t--){
        ski();
    }
    return 0;
}
