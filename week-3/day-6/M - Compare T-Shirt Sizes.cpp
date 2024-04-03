                                                  // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        long long long_a = a.size();
        long long long_b = b.size();
        if(a == b) {
            cout << "=" << endl;
        } 
        else if(a[long_a - 1] == b[long_b - 1] && a[long_a - 1] == 'S') {
            if(long_a > long_b) {
                cout << "<" << endl;
            } 
            else if(long_a == long_b) {
                cout << "=" << endl;
            } 
            else {
                cout << ">" << endl;
            }
        } 
        else if(a[long_a - 1] == b[long_b - 1] && a[long_a - 1] == 'L') {
            if(long_a > long_b) {
                cout << ">" << endl;
            } 
            else if(long_a == long_b) {
                cout << "=" << endl;
            } 
            else {
                cout << "<" << endl;
            }
        } else {
            if((a[long_a - 1] == 'L' && (b[long_b - 1] == 'M' || b[long_b - 1] == 'S')) || (a[long_a - 1] == 'M' && b[long_b - 1] == 'S')) {
                cout << ">" << endl;
            } 
            else if((b[long_b - 1] == 'L' && (a[long_a - 1] == 'M' || a[long_a - 1] == 'S')) || (b[long_b - 1] == 'M' && a[long_a - 1] == 'S')) {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}
