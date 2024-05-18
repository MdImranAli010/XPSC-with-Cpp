// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    long long tot=0, mx=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < mx){
            tot += mx-arr[i];
        }
        else{
            mx=arr[i];
        }
    }
    
    cout<<tot<<endl;
    
    return 0;
}
