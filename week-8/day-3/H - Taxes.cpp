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
    int n;
    cin >> n;
    if (prime_or_not(n)){
        cout << "1" << endl;
    }
    else if (n % 2 == 0) {
        cout << "2" << endl;
    }
    else {
        if (prime_or_not(n - 2)) {
            cout << "2" << endl;
        }
        else {
            cout << "3" << endl;
        }
    }
  
    return 0;
}
