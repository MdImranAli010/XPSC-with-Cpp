// Author: Md. Imran ALi



#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        int k = 1;
        while ((k << 1) < n) {
            k <<= 1;
        }

        for (int i = k - 1; i >= 0; i--) {
            cout << i << " ";
        }
        for (int i = k; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
