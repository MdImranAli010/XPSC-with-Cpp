/*
    Author: Md. Imran Ali
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;
    int len = 1;
    while (X * 2 <= Y) {
        X *= 2;
        len++;
    }
    cout<<len<<endl;

    return 0;
}
