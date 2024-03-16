/*
    Author: Md. Imran Ali
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int max_coin=max(n, m);
    int max_coin_press=max_coin*2-1;
    int max_coin_both=n+m;
    cout<<max(max_coin_press, max_coin_both)<<endl;

    return 0;
}
