// Author: Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
 
        int a=abs(x-1);
        int b=(z-1)+ abs(y-z);
 
        if(a==b){
            cout<<3<<endl;
        }
        else if(a<b){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    
    return 0;
}
