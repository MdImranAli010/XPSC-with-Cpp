// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

bool prime_or_not(int n){
    if(n <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        int x=1+d;
        int ans1=0;
        int ans2=0;

        while(true){
            if(prime_or_not(x)){
                ans1=x;
                break;
            }
            x++;
        }
        x += d;
        while(true){
            if(prime_or_not(x)){
                ans2=x;
                break;
            }
            x++;
        }

        cout<<ans1*ans2<<endl;
    }
    return 0;
}
