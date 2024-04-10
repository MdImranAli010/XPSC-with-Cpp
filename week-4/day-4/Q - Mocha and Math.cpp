// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 1; i < n; i++) {
            a[0] &= a[i];
        }
        cout << a[0] << endl;
    }
    
    return 0;
}

