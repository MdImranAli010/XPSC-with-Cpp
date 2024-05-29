// Author: Md. Imran Ali




#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n;
        vector<long long> v;
        long long ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            v.push_back(ar[i]);
        }
        sort(v.begin(), v.end());
        int sum=0;

        for (int i=0; i<n; i++) {
            if (ar[i] == *(v.rbegin())) {
                k=v.size();
                sum=sum + (k-1);
                v.pop_back();
                continue;
            }

            auto it=upper_bound(v.begin(), v.end(), ar[i]);
            k=it-v.begin();
            sum += (k-1);
            v.erase(it-1);
        }

        cout<<sum<<endl;
    }

    return 0;
}
