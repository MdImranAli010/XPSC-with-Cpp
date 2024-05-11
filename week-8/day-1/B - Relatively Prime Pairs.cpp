// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main () {
    long long lft, rgt, i;
    cin>>lft>>rgt;
    cout<<"YES"<<endl;
    for(i=lft; i<rgt+1; i += 2){
        cout<<i<<' '<<i+1<<endl;
    }
    
    return 0;
}
