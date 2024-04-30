// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n, k;
    cin >> n >> k;
    
    vector<long long> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int l = 0, r = vec[n-1]-vec[0]+10;
    while(l+1 < r){
        long long mid = (l+r) / 2;
        bool flag=true;
        int cnt=1;
        for(int i=0; i<n; i++){
            int j=i+1;
            while(j < n){
                if(vec[i] + mid <= vec[j]){
                    break;
                }
                j++;
            }
            if(j==n){
                break;
            }
            cnt++;
            i = j-1;
        }
        if(cnt >= k){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    
    cout<<l<<endl;
    
    return 0;
}
