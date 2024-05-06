// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;


long long Binary_Inversions(vector<int> a, int n) {
    long long res=0, x=0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            x++;
        }
        else{
            res += x;
        }
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        long long ans=Binary_Inversions(arr, n);
        int id=-1;
        auto it=find(arr.begin(), arr.end(), 0);
        if(it != arr.end()){
            id=distance(arr.begin(), it);
            *it=1;
        }

        ans=max(ans, Binary_Inversions(arr, n));
        if(id !=-1){
            arr[id]=0;
        }

        auto rit=find(arr.rbegin(), arr.rend(), 1);
        if(rit != arr.rend()){
            int idx=distance(arr.rbegin(), rit);
            *rit=0;
        }

        ans=max(ans, Binary_Inversions(arr, n));
        cout<<ans<<endl;
    }
    return 0;
}
