// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> arr(n);

    long long maxi = 0, res = 0, x = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        maxi=max(maxi, arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]== maxi){
            continue;
        }
        res += maxi-arr[i];
        x=gcd(x, maxi-arr[i]);
    }
    
    long long result=res/x;

    cout<<result<<" "<<x<< endl;

    return 0;
}
