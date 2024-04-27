// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin>>x;
        bool found=false;
        
        for(long long i=1; pow(i,3)<x; ++i) {
            long long j=cbrt(x-pow(i,3));
            if(pow(j,3) + pow(i,3) == x) {
                found=true;
                break;
            }
        }
        
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
