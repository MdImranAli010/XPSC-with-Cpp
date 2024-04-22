// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < k; i++){
        int q;
        cin >> q;
        
        int L=0, H =n-1;
        bool find=false;
        
        while(L<=H){
            int mid=L+(H-L)/2;
            
            if(arr[mid] == q) {
                find = true;
                break;
            } 
            else if(arr[mid] < q) {
                L = mid+1;
            } 
            else {
                H = mid-1;
            }
        }
        
        if(find){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
