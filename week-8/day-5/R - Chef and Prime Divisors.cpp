// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;


long long gcd(long long m, long long n) {
    while(n != 0){
        long long temp=n;
        n=m%n;
        m=temp;
    }
    return m;
}

bool reduce(long long a, long long b) {
    long long g = gcd(a, b);
    while (b != 1) {
        if (g == 1) {
            return false;
        }
        b /= g;
        g = gcd(b, g);
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (reduce(a, b)) {
            cout << "Yes"<<endl;
        }
        else {
            cout << "No"<<endl;
        }
    }
    
    return 0;
}

