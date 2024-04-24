// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<long long> a(n);
        for(int i= 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<long long>());

        vector<long long> pref(n, 0);
        pref[0]=a[0];
        for(int i = 1; i<n; i++){
            pref[i] = pref[i - 1] + a[i];
        }

        while(q--){
            long long x;
            cin>>x;
            if(x> pref[n-1]){
                cout<<-1<<endl;
                continue;
            }
            int L=0, H=n-1;
            int idx=-1;
            while(L<= H){
                int mid = L+(H-L) / 2;
                if(pref[mid] >= x){
                    idx=mid;
                    H=mid - 1;
                }
                else {
                    L = mid + 1;
                }
            }
            cout<<idx+1<<endl;
        }
    }
    return 0;
}
