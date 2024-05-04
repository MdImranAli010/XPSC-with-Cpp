// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), diff(n-1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n-1; i++){
            diff[i]=abs(a[i]-a[i+1]);
        }

        long long result = LLONG_MAX;
        
        if(n>=2){
            result=min(result, diff[0]);
            result=min(result, diff[n-2]);
        }
        
        for(int i=1; i<n-1; i++){
            long long score=max(diff[i-1], diff[i]);
            result=min(result, score);
        }
        cout<<result<<endl;
    }

    return 0;
}
