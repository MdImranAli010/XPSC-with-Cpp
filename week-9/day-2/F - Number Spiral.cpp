// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while (t--){
        long long x, y;
        cin >> x >> y;
        long long max_val=max(x, y);
        long long result;
        
        if(max_val % 2 == 0){
            if(x == max_val){
                result=max_val*max_val-y+1;
            }
            else{
                result=(max_val-1) * (max_val-1) + x;
            }
        }
        else{
            if(y == max_val){
                result=max_val*max_val-x+1;
            }
            else{
                result=(max_val-1)*(max_val-1)+y;
            }
        }
        
        cout<<result<<endl;
    }
    
    return 0;
}
