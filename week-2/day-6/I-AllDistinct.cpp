                                               // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--){
        int n; 
        cin>>n;
        
        set<int> val;
        for(int i=0; i<n; i++){
            int m; 
            cin>>m;
            val.insert(m);
        }
        
        int unq=val.size();
        if((n-unq) % 2 != 0){
            unq--;
        }
        cout<<unq<<"\n";
    }
    return 0;
}
