// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum=0, neg=0, mn=LLONG_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += abs(a[i]);
            neg += (a[i]<0);
            mn=min(mn, abs(a[i]));
        }

        if(neg%2 == 1){
            sum -= (2LL*mn);
        }

        cout<<sum<<endl;
    }
    return 0;
}
