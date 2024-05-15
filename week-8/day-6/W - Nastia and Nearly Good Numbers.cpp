// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long A, B;
        cin >> A >> B;
        if(B != 1){
            cout << "YES" << endl;
            cout << (A*B) << " " << A << " " << (B+1LL)*A << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
