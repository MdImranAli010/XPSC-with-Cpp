// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

void cnt_prime(int n, map<int, int>& mp) {
    while(n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }
    if(n > 1) {
        mp[n]++;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        map<int, int> mp;
        long long  n, m;
        bool x=false;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> m;
            cnt_prime(m, mp);
        }
        for(auto& p : mp) {
            if(p.second % n != 0) {
                x=true;
                break;
            }
        }
        
        if(x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

