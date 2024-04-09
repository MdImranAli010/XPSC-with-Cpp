// // Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

void Xorry(int x){
    int pos=31 - __builtin_clz(x);
    int i=(1<<pos);
    int j=i^x;
    cout<<j<<" "<<i<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        Xorry(x);
    }
    return 0;
}
