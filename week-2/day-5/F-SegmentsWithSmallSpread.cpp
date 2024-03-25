                                          // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin>>n>>k;
    
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long long ans=0;
    multiset<long long> diff;
    int L=0;
    for (int R=0; R<n; R++){
        diff.insert(a[R]);
        while(*diff.rbegin() - *diff.begin() > k){
            diff.erase(diff.find(a[L]));
            L++;
        }
        ans += R-L+1;
    }
    cout<<ans<<endl;

    return 0;
}
