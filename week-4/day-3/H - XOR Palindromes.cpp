// Author: Md. Imran ALi



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long n; 
        string str;
        cin >> n >> str;
        long long count = 0;
        
        for (int i = 0; i < n / 2; i++) {
            count += (str[i] != str[n - i - 1]);
        }
        for (int i = 0; i <= n; i++) {
            if (n % 2 == 0) {
                if (min(static_cast<long long int>(i), n - static_cast<long long int>(i)) < count || (count % 2 != i % 2)) {
                    cout << '0';
                } 
                else {
                    cout << '1';
                }
            } 
            else {
                if (min(static_cast<long long int>(i), n - static_cast<long long int>(i)) < count) {
                    cout << '0';
                } 
                else {
                    cout << '1';
                }
            }
        }
        cout << endl;
    }
    return 0;
}
