// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        auto iter= upper_bound(arr,arr+n,x);
        cout<<iter-arr<<endl;
    }
    return 0;
}
