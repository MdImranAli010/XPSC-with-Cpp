                                                // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    map<int, int> cnt;
    long long ans=0, l=0;
    for(int r=0; r<n; r++){
        cnt[a[r]]++;
        while(cnt.size() > k){
            cnt[a[l]]--;
            if(cnt[a[l]]==0){
                cnt.erase(a[l]);
            }
            l++;
        }
        ans += r-l+1;
    }

    cout<<ans<<endl;

    return 0;
}



