// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        long long result;
        long long x= (k-1) / (n-1);
        result=k+x;
        cout<<result<<endl;
    }
    return 0;
}
