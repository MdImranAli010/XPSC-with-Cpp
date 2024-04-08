// Author: Imran Ali


#include <bits/stdc++.h>
using namespace std;

int And_Then_There_Were_K(int n){
    int position=0;
    while(n>0){
        position++;
        n>>=1;
    }
    return (1<<(position-1))-1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<And_Then_There_Were_K(n)<<endl;
    }
    return 0;
}
