// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        
        int k=a&b;
        int x=(a^k)+(b^k);
        
        cout<<x<<endl;
    }
    return 0;
}
