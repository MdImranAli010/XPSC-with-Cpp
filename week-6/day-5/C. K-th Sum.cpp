// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long low=2, high=2e9;
    while(low<high){
        long long mid=low+(high-low) / 2;
        long long count=0;

        for(int i=0; i<n; i++){
            count += upper_bound(b.begin(), b.end(), mid-a[i])-b.begin();
        }

        if(count >= k){
            high = mid;
        }
        else{
            low=mid+1;
        }
    }

    cout<<low<<endl;

    return 0;
}
